/*
 * XREFs of sub_14000ECE0 @ 0x14000ECE0
 * Callers:
 *     sub_1400046C0 @ 0x1400046C0 (sub_1400046C0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000ECE0(__int64 a1, unsigned int *a2)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  IO_WORKITEM_ROUTINE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
  v3 = (_DWORD *)qword_140019800;
  v4 = 0;
  v5 = qword_1400197F8;
  if ( !qword_140019800 )
    v3 = (_DWORD *)qword_140019808;
  if ( !v3 )
  {
    if ( !qword_1400197F8 )
    {
      v4 = -1073741436;
      goto LABEL_14;
    }
    v9 = *a2;
    if ( (unsigned int)v9 >= *((_DWORD *)qword_1400197F8 + 1) )
      goto LABEL_5;
    v10 = 6 * v9;
    *((_DWORD *)qword_1400197F8 + 2 * v10 + 14) = a2[1];
    v5[2 * v10 + 15] = a2[2];
    if ( byte_140019838 )
      goto LABEL_14;
    v3 = 0LL;
    v8 = sub_14003A540;
LABEL_12:
    byte_140019838 = 1;
    IoQueueWorkItem(IoWorkItem, v8, DelayedWorkQueue, v3);
    goto LABEL_14;
  }
  v6 = *a2;
  if ( (unsigned int)v6 < *v3 )
  {
    v7 = 80 * v6;
    v3[v7 + 84] = a2[1];
    v3[v7 + 85] = a2[2];
    if ( byte_140019838 )
      goto LABEL_14;
    v8 = (IO_WORKITEM_ROUTINE *)sub_14003A3C0;
    goto LABEL_12;
  }
LABEL_5:
  v4 = -1073741811;
LABEL_14:
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
  return v4;
}
