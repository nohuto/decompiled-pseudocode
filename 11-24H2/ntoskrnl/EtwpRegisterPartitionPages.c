/*
 * XREFs of EtwpRegisterPartitionPages @ 0x14064EC40
 * Callers:
 *     EtwpAllocatePartitionMemory @ 0x14047CF3C (EtwpAllocatePartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpRegisterPartitionPages(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  _QWORD *Pool2; // rax
  _QWORD *v8; // rsi
  KIRQL v9; // r15
  __int64 v10; // rbx
  char *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // edi
  __int64 v16; // r10
  _QWORD *v17; // r14
  _QWORD *v18; // r9
  __int64 v19; // rdx
  PVOID v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v24; // [rsp+68h] [rbp+20h]
  __int64 v25; // [rsp+68h] [rbp+20h]

  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x4F777445u);
  v8 = Pool2;
  if ( !Pool2 )
    return (char)Pool2;
  Pool2[1] = a3;
  Pool2[2] = a2;
  Pool2[3] = a1;
  v9 = ExAcquireSpinLockExclusive(&dword_140EFEEF0);
  v10 = 2 * ((unsigned int)dword_140EFEEE4 >> 5);
  if ( EtwpMdlTable < (unsigned int)v10 )
    goto LABEL_24;
  if ( (unsigned int)v10 < 4 )
    v10 = 4LL;
  v11 = (char *)ExAllocatePool2(0x40uLL, 8LL * (unsigned int)v10, 0x42777445u);
  if ( v11 )
  {
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      v12 = -1;
      do
      {
        ++v12;
        LODWORD(v10) = (unsigned int)v10 >> 1;
      }
      while ( (_DWORD)v10 );
      v10 = (unsigned int)(1 << v12);
    }
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    v13 = (unsigned int)v10;
    if ( v11 > &v11[8 * v10] )
      v13 = 0LL;
    if ( v13 )
      memset64(v11, (unsigned __int64)&EtwpMdlTable + 1, v13);
    v14 = dword_140EFEEE4;
    v15 = 0;
    v16 = -1LL << (dword_140EFEEE4 & 0x1F);
    if ( (dword_140EFEEE4 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v17 = qword_140EFEEE8;
        while ( 1 )
        {
          v18 = (_QWORD *)v17[v15];
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
          v17[v15] = *v18;
          v24 = v16 & v18[1];
          v19 = (37
               * (BYTE6(v24)
                + 37
                * (BYTE5(v24)
                 + 37
                 * (BYTE4(v24)
                  + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
               + HIBYTE(v24)) & (unsigned int)(v10 - 1);
          *v18 = *(_QWORD *)&v11[8 * v19];
          *(_QWORD *)&v11[8 * v19] = v18;
        }
        v14 = dword_140EFEEE4;
        ++v15;
      }
      while ( v15 < (unsigned int)dword_140EFEEE4 >> 5 );
    }
    v20 = qword_140EFEEE8;
    qword_140EFEEE8 = v11;
    dword_140EFEEE4 = (32 * v10) | v14 & 0x1F;
    if ( v20 )
      ExFreePoolWithTag(v20, 0x42777445u);
    goto LABEL_24;
  }
  if ( (dword_140EFEEE4 & 0xFFFFFFE0) != 0 )
  {
LABEL_24:
    v21 = qword_140EFEEE8;
    v25 = v8[1] & (-1LL << (dword_140EFEEE4 & 0x1F));
    v22 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & (((unsigned int)dword_140EFEEE4 >> 5) - 1);
    *v8 = *((_QWORD *)qword_140EFEEE8 + v22);
    v21[v22] = v8;
    v6 = 1;
    ++EtwpMdlTable;
  }
  ExReleaseSpinLockExclusive(&dword_140EFEEF0, v9);
  if ( !v6 )
    ExFreePoolWithTag(v8, 0x4F777445u);
  LOBYTE(Pool2) = v6;
  return (char)Pool2;
}
