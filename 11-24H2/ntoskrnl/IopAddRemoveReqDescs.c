/*
 * XREFs of IopAddRemoveReqDescs @ 0x140A98BC0
 * Callers:
 *     IopSelectNextConfiguration @ 0x14071F7E4 (IopSelectNextConfiguration.c)
 *     PnpFindBestConfigurationWorker @ 0x14071FD98 (PnpFindBestConfigurationWorker.c)
 *     PnpSelectFirstConfiguration @ 0x14071FF34 (PnpSelectFirstConfiguration.c)
 *     IopBootAllocation @ 0x140722FC8 (IopBootAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopAddRemoveReqDescs(__int64 a1, unsigned int a2, _QWORD *a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx

  if ( a2 )
  {
    v4 = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v4);
      if ( *(_BYTE *)(v9 + 8) )
      {
        v10 = *(_QWORD *)(v9 + 288);
        v11 = *(_BYTE *)(v10 + 104);
        if ( (v11 & 1) != 0 )
        {
          v12 = *(_QWORD *)(v10 + 24);
          *(_BYTE *)(v10 + 104) = v11 & 0xFE;
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v12 + 8), 3LL);
        }
        *(_BYTE *)(v10 + 105) = 1;
        v13 = (_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
        if ( a4 )
        {
          *(_QWORD *)(*(_QWORD *)(v9 + 32) + 48LL) = *(_QWORD *)(v9 + 32) + 40LL;
          *v13 = v13;
          v14 = *(_QWORD **)(v10 + 48);
          if ( *v14 != v10 + 40 )
            goto LABEL_21;
          v13[1] = v14;
          *v13 = v10 + 40;
          *v14 = v13;
          v15 = (_QWORD *)(v10 + 88);
          *(_QWORD *)(v10 + 48) = v13;
          if ( (_QWORD *)*v15 == v15 )
          {
            for ( i = (_QWORD *)*a3; i != a3; i = (_QWORD *)*i )
            {
              if ( *(_DWORD *)(*(i - 7) + 152LL) >= *(_DWORD *)(*(_QWORD *)(v10 + 32) + 152LL) )
                break;
            }
            *v15 = i;
            *(_QWORD *)(v10 + 96) = i[1];
            *(_QWORD *)i[1] = v15;
            i[1] = v15;
          }
        }
        else
        {
          v17 = *v13;
          if ( *(_QWORD **)(*v13 + 8LL) != v13
            || (v18 = *(_QWORD **)(*(_QWORD *)(v9 + 32) + 48LL), (_QWORD *)*v18 != v13) )
          {
LABEL_21:
            __fastfail(3u);
          }
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          v13[1] = v13;
          *v13 = v13;
          if ( *(_QWORD *)(v10 + 40) == v10 + 40 )
          {
            v19 = (_QWORD *)(v10 + 88);
            v20 = *(_QWORD *)(v10 + 88);
            if ( *(_QWORD *)(v20 + 8) != v10 + 88 )
              goto LABEL_21;
            v21 = *(_QWORD **)(v10 + 96);
            if ( (_QWORD *)*v21 != v19 )
              goto LABEL_21;
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
            *(_QWORD *)(v10 + 96) = v10 + 88;
            *v19 = v19;
          }
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < a2 );
  }
}
