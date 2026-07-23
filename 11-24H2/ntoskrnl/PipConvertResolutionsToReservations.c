/*
 * XREFs of PipConvertResolutionsToReservations @ 0x140AB77E8
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x1409BD760 (PipDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409BF0A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 *     PipDeleteBindingIds @ 0x140A9A298 (PipDeleteBindingIds.c)
 */

__int64 __fastcall PipConvertResolutionsToReservations(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _DWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  LODWORD(v12) = 0;
  v11 = 0LL;
  if ( a1 )
  {
    v2 = 0;
    PipDeleteBindingIds(a1);
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(_QWORD **)(a1 + 32);
    while ( v4 != v3 )
    {
      v5 = v4;
      v4 = (_QWORD *)*v4;
      if ( !*((_BYTE *)v5 + 56) )
      {
        v6 = (_QWORD *)v5[5];
        while ( v6 != v5 + 5 )
        {
          v7 = v6;
          v6 = (_QWORD *)*v6;
          v8 = v7 + 2;
          if ( *v8 == 1 )
          {
            v9 = v5[3];
            LODWORD(v11) = 0;
            v12 = *(_QWORD *)(v9 + 48);
            v2 = PipSetDependency((__int64)&v11, (__int64)v8);
          }
        }
        *((_BYTE *)v5 + 56) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
