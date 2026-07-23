/*
 * XREFs of HalpApicConvertFromRte @ 0x140565D28
 * Callers:
 *     HalpApicInitializeIoUnit @ 0x1405663E0 (HalpApicInitializeIoUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicConvertFromRte(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // eax
  __int64 result; // rax
  int v8; // edi
  unsigned int v9; // ebp
  bool v10; // zf

  *(_OWORD *)a3 = 0LL;
  v3 = a2;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 48) = (unsigned __int8)a1;
  *(_DWORD *)(a3 + 52) = (unsigned __int8)a1 >> 4;
  *(_DWORD *)(a3 + 16) = -1;
  v6 = a1 & 0x700;
  if ( (a1 & 0x700) == 0 )
    goto LABEL_12;
  switch ( v6 )
  {
    case 256:
      *(_DWORD *)(a3 + 12) = 2;
LABEL_12:
      *(_DWORD *)(a3 + 20) = 1;
      break;
    case 512:
      *(_DWORD *)(a3 + 20) = 3;
      break;
    case 1024:
      *(_DWORD *)(a3 + 20) = 2;
      break;
    case 1280:
      *(_DWORD *)(a3 + 20) = 7;
      break;
    case 1792:
      *(_DWORD *)(a3 + 20) = 4;
      break;
  }
  result = a1 & 0x800;
  if ( (a2 & 0x10000) != 0 )
  {
    *(_DWORD *)(a3 + 24) = 7;
    *(_DWORD *)(a3 + 32) = a2 >> 17;
    if ( (a1 & 0x800) == 0 )
      goto LABEL_31;
    v8 = (a2 >> 17) | 0x8000;
    goto LABEL_24;
  }
  if ( (a1 & 0x800) != 0 )
  {
    if ( !HalpApicX2Mode || HalpApicRestoreNonX2ModeOnReset )
    {
      v9 = HIBYTE(a2);
      result = guard_dispatch_icall_no_overrides(224LL, 4LL);
      if ( (_DWORD)result == -1 )
      {
        *(_DWORD *)(a3 + 24) = 5;
        v8 = HIBYTE(v3);
LABEL_24:
        *(_DWORD *)(a3 + 32) = v8;
        goto LABEL_31;
      }
      *(_DWORD *)(a3 + 36) = v9 & 0xF;
      v8 = v3 >> 28;
    }
    else
    {
      result = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 36) = (unsigned __int16)a2;
      v8 = HIWORD(a2);
    }
    *(_DWORD *)(a3 + 24) = 6;
    goto LABEL_24;
  }
  v10 = HalpApicX2Mode == 0;
  *(_DWORD *)(a3 + 24) = 4;
  if ( v10 || HalpApicRestoreNonX2ModeOnReset )
  {
    v3 = HIBYTE(a2);
    v10 = HIBYTE(a2) == 255;
  }
  else
  {
    v10 = a2 == -1;
  }
  *(_DWORD *)(a3 + 32) = v3;
  if ( v10 )
    *(_DWORD *)(a3 + 24) = 1;
LABEL_31:
  *(_DWORD *)(a3 + 8) = 1;
  if ( (a1 & 0x8000) != 0 )
    *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)a3 = 1;
  if ( (a1 & 0x2000) != 0 )
    *(_DWORD *)a3 = 2;
  if ( (a1 & 0x10000) == 0 )
    *(_DWORD *)(a3 + 12) |= 0x10u;
  *(_BYTE *)(a3 + 4) = 0;
  return result;
}
