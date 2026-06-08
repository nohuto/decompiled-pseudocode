/*
 * XREFs of sub_14000EBBC @ 0x14000EBBC
 * Callers:
 *     sub_1400046C0 @ 0x1400046C0 (sub_1400046C0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000EBBC(__int64 a1, unsigned int *a2)
{
  _DWORD *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _IO_WORKITEM *v11; // rcx

  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
  v4 = *(_DWORD **)(a1 + 1144);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 544);
  if ( v4 )
  {
    v7 = *a2;
    if ( (unsigned int)v7 >= *v4 )
    {
LABEL_3:
      v5 = -1073741811;
      goto LABEL_12;
    }
    v8 = 3 * v7;
    v4[v8 + 2] = a2[1];
    v4[v8 + 3] = a2[2];
  }
  else
  {
    if ( !v6 )
    {
      v5 = -1073741436;
      goto LABEL_12;
    }
    v9 = *a2;
    if ( (unsigned int)v9 >= *(_DWORD *)(v6 + 16) )
      goto LABEL_3;
    v10 = 10 * v9;
    *(_DWORD *)(v6 + 8 * v10 + 28) = a2[1] / 0xA;
    *(_DWORD *)(v6 + 8 * v10 + 24) = a2[2] / 0xA;
  }
  if ( !*(_BYTE *)(a1 + 1168) && !*(_BYTE *)(a1 + 1169) )
  {
    v11 = *(struct _IO_WORKITEM **)(a1 + 1160);
    *(_WORD *)(a1 + 1168) = 257;
    IoQueueWorkItem(v11, sub_14003A480, DelayedWorkQueue, 0LL);
  }
LABEL_12:
  (*(void (__fastcall **)(__int64, __int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168, v6);
  return v5;
}
