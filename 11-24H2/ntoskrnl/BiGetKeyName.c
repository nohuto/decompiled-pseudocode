/*
 * XREFs of BiGetKeyName @ 0x1409A53F8
 * Callers:
 *     BiCreateBootEntry @ 0x14081533C (BiCreateBootEntry.c)
 *     BiGetObjectIdentifier @ 0x1409A5118 (BiGetObjectIdentifier.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB7300 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A1930 (BiSanitizeHandle.c)
 *     BiZwQueryKey @ 0x1404A2DC4 (BiZwQueryKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetKeyName(void *a1, _QWORD *a2)
{
  unsigned int i; // r14d
  unsigned int *Pool2; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // r15
  ULONG v11; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    Pool2 = 0LL;
    v11 = 0;
    v6 = BiZwQueryKey(a1, KeyBasicInformation, 0LL, 0, &v11);
    v7 = v6;
    if ( v6 == -1073741789 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL, v11, 0x4B444342u);
      if ( !Pool2 )
        goto LABEL_4;
      v7 = BiZwQueryKey(a1, KeyBasicInformation, Pool2, v11, &v11);
      if ( v7 >= 0 )
      {
        v8 = (_WORD *)ExAllocatePool2(0x102uLL, Pool2[3] + 2LL, 0x4B444342u);
        v9 = v8;
        if ( !v8 )
        {
LABEL_4:
          v7 = -1073741670;
          goto LABEL_5;
        }
        memmove(v8, Pool2 + 4, Pool2[3]);
        v9[(unsigned __int64)Pool2[3] >> 1] = 0;
        *a2 = v9;
      }
    }
    else if ( v6 >= 0 )
    {
      v7 = -1073741811;
    }
LABEL_5:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v7 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v7;
}
