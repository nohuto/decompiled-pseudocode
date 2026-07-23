/*
 * XREFs of WmipLegacyEtwCallback @ 0x140A765F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall WmipLegacyEtwCallback(__int64 a1, unsigned __int8 a2, _QWORD *a3, ULONG_PTR a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 *v10; // rax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // eax
  __int64 *i; // r14
  __int64 v17; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  struct _WORK_QUEUE_ITEM *v20; // rcx
  __int64 Pool2; // rax
  _QWORD *v22; // rdi
  int v23; // ecx
  _QWORD *v24; // rcx
  __int64 v25; // rax

  if ( a2 <= 1u )
  {
    v7 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *(_QWORD *)(a4 + 112) )
    {
      v8 = a2 ? *a3 : 0LL;
      v9 = (__int64 *)(a4 + 56);
      *(_QWORD *)(a4 + 120) = v8;
      v10 = *(__int64 **)(a4 + 56);
      if ( v10 != (__int64 *)(a4 + 56) )
      {
        do
        {
          v23 = *((_DWORD *)v10 + 4);
          if ( (v23 & 0x100000) != 0 && (a2 || (v23 & 0x200000) != 0) )
            ++v7;
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        if ( v7 )
        {
          Pool2 = ExAllocatePool2(0x100uLL, 8 * v7 + 40, 0x70696D57u);
          v22 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            *(_DWORD *)(Pool2 + 16) = 2;
            v13 = 0LL;
            *(_QWORD *)(Pool2 + 24) = *a3;
            *(_BYTE *)(Pool2 + 36) = a2;
            *(_DWORD *)(Pool2 + 32) = v7;
            for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
            {
              v11 = *((_DWORD *)i + 4);
              if ( (v11 & 0x100000) != 0 && (a2 || (v11 & 0x200000) != 0) )
              {
                v12 = i[8];
                WmipReferenceEntry(v12);
                v22[v13 + 5] = v12;
                v13 = (unsigned int)(v13 + 1);
                v14 = *((_DWORD *)i + 4);
                if ( a2 )
                  v15 = v14 | 0x200000;
                else
                  v15 = v14 & 0xFFDFFFFF;
                *((_DWORD *)i + 4) = v15;
              }
            }
            WmipReferenceEntry(a4);
            v17 = *(_QWORD *)(a4 + 128);
            if ( v17 )
            {
              v24 = *(_QWORD **)(v17 + 32);
              v25 = v17 + 24;
              if ( *v24 != v25 )
LABEL_18:
                __fastfail(3u);
              *v22 = v25;
              v22[1] = v24;
              *v24 = v22;
              *(_QWORD *)(v25 + 8) = v22;
            }
            else
            {
              v18 = *(_QWORD **)(a4 + 144);
              if ( *v18 != a4 + 136 )
                goto LABEL_18;
              *v22 = a4 + 136;
              v22[1] = v18;
              *v18 = v22;
              *(_QWORD *)(a4 + 144) = v22;
              v19 = *(_DWORD *)(a4 + 16);
              if ( (v19 & 0x10) == 0 )
              {
                v20 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)(a4 + 96) + 24LL);
                *(_DWORD *)(a4 + 16) = v19 | 0x10;
                ExQueueWorkItem(v20, DelayedWorkQueue);
              }
            }
          }
        }
      }
    }
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
}
