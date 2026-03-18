/*
 * XREFs of AcpiPccReleaseSubspace @ 0x140064010
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccLockSubspace @ 0x140051700 (AcpiPccLockSubspace.c)
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     AcpiPccUpdateDoorbellRegister @ 0x140053D60 (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiDiagTracePccReleaseSubspace @ 0x1400570F8 (AcpiDiagTracePccReleaseSubspace.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140064380 (AcpiPccUpdateCommandCompleteStatus.c)
 */

__int64 __fastcall AcpiPccReleaseSubspace(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // r8d
  char v5; // bp
  _QWORD *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  KIRQL v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = -1073741823;
  v3 = 0LL;
  AcpiPccLockSubspace(a1, &v10);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 == 5 )
  {
    v6 = (_QWORD *)(a1 + 360);
    v7 = *(__int64 **)(a1 + 360);
    if ( v7 == (__int64 *)(a1 + 360) )
    {
      if ( *(_DWORD *)(a1 + 16) == 2 )
      {
        AcpiPccUpdateCommandCompleteStatus(a1);
        AcpiPccUpdateDoorbellRegister(a1);
        v4 = *(_DWORD *)(a1 + 8) & 0xFFFFFFE1 | 0x10;
      }
      else
      {
        v4 = v4 & 0xFFFFFFE1 | 6;
      }
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 360);
      if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD *)(v8 + 8) != v3) )
        __fastfail(3u);
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v4 = *(_DWORD *)(a1 + 8) & 0xFFFFFFE1 | 0xA;
    }
    *(_DWORD *)(a1 + 8) = v4;
    v2 = 0;
  }
  AcpiDiagTracePccReleaseSubspace(*(_DWORD *)(a1 + 4), v5, (v4 >> 1) & 0xF, v2);
  AcpiPccUnlockSubspace(a1, v10);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
  }
  return v2;
}
