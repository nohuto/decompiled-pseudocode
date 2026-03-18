/*
 * XREFs of GetOpRegionScopeWorker @ 0x140049280
 * Callers:
 *     GetOpRegionScope @ 0x14001612C (GetOpRegionScope.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x140016084 (AMLIIterateParentNext.c)
 *     IsPciDevice @ 0x140049380 (IsPciDevice.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 6);
  if ( a2 >= 0 )
  {
    while ( 1 )
    {
      v6 = a4[1];
      if ( !v6 )
        break;
      v7 = *((_DWORD *)a4 + 4);
      if ( (v7 & 0x800) == 0 )
      {
        *((_DWORD *)a4 + 4) = v7 | 0x800;
        v8 = IsPciDevice(v6, GetOpRegionScopeWorker, a4, (char *)a4 + 20);
        v5 = v8;
        if ( v8 == 259 )
          return 259LL;
        if ( v8 < 0 )
          goto LABEL_11;
      }
      *((_DWORD *)a4 + 4) &= ~0x800u;
      v9 = a4[1];
      if ( *((_BYTE *)a4 + 20) )
      {
        *(_QWORD *)a4[6] = v9;
        AMLIReferenceHandleEx(*(_QWORD *)a4[6]);
        v5 = 0;
        goto LABEL_11;
      }
      a4[1] = AMLIIterateParentNext(v9);
    }
    v5 = -1073741275;
  }
LABEL_11:
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))a4[4])(*a4, v5, 0LL, a4[5]);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  v11 = a4[1];
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    a4[1] = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return v5;
}
