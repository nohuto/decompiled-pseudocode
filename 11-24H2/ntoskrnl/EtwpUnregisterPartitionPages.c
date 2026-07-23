/*
 * XREFs of EtwpUnregisterPartitionPages @ 0x14047EACC
 * Callers:
 *     EtwpFreePartitionMemory @ 0x14047EA6C (EtwpFreePartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUnregisterPartitionPages(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  KIRQL v6; // r14
  __int64 v7; // r11
  __int64 v8; // r9
  unsigned int v9; // r10d
  _QWORD *v10; // r8
  _QWORD *i; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h]
  __int64 v14; // [rsp+48h] [rbp+10h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = ExAcquireSpinLockExclusive(&dword_140EFEEF0);
  v7 = -1LL << (dword_140EFEEE4 & 0x1F);
  v8 = a2 & v7;
  if ( (unsigned int)dword_140EFEEE4 >> 5 )
  {
    v9 = ((unsigned int)dword_140EFEEE4 >> 5) - 1;
    v13 = a2 & v7;
    v10 = (char *)qword_140EFEEE8
        + 8
        * ((37
          * (BYTE6(v13)
           + 37
           * (BYTE5(v13)
            + 37
            * (BYTE4(v13)
             + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v8 + 11623883)))))))
          + HIBYTE(v13)) & v9);
    while ( 1 )
    {
      v10 = (_QWORD *)*v10;
      if ( ((unsigned __int8)v10 & 1) != 0 )
        break;
      if ( v8 == (v7 & v10[1]) )
      {
        if ( v10 )
        {
          v3 = v10[2];
          v4 = v10;
          if ( a1 )
            *a1 = v10[3];
          v14 = v7 & v10[1];
          for ( i = (char *)qword_140EFEEE8
                  + 8
                  * (v9 & (HIBYTE(v14)
                         + 37
                         * (BYTE6(v14)
                          + 37
                          * (BYTE5(v14)
                           + 37
                           * (BYTE4(v14)
                            + 37
                            * (BYTE3(v14)
                             + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( (_QWORD *)*i == v10 )
            {
              *i = *v10;
              --EtwpMdlTable;
              *v10 |= 0x8000000000000002uLL;
              goto LABEL_13;
            }
          }
        }
        break;
      }
    }
  }
LABEL_13:
  ExReleaseSpinLockExclusive(&dword_140EFEEF0, v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4F777445u);
  return v3;
}
