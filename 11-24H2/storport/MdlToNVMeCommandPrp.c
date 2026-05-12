/*
 * XREFs of MdlToNVMeCommandPrp @ 0x1400FA908
 * Callers:
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MdlToNVMeCommandPrp(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4, __int64 a5)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rcx

  v6 = a3[11];
  v8 = ((unsigned int)a3[10] + 4095LL + ((v6 + a3[8]) & 0xFFFuLL)) >> 12;
  v9 = ((v6 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  if ( !(_DWORD)v9 )
    return 3221225473LL;
  v12 = v6 >> 12;
  if ( v6 < 0x1000 )
    v12 = 0LL;
  v13 = v6 & 0xFFF;
  if ( v6 < 0x1000 )
    v13 = v6;
  if ( (int)v12 + (int)v9 > (unsigned int)v8 )
    return 3221225701LL;
  *(_QWORD *)(a1 + 24) = v13 + (*(_QWORD *)&a3[2 * v12 + 12] << 12);
  if ( (_DWORD)v9 == 1 )
    return 0LL;
  if ( (_DWORD)v9 == 2 )
  {
    v14 = *(_QWORD *)&a3[2 * (unsigned int)(v12 + 1) + 12] << 12;
LABEL_12:
    *(_QWORD *)(a1 + 32) = v14;
    return 0LL;
  }
  if ( a4 )
  {
    v14 = a5;
    if ( a5 )
    {
      v15 = 1;
      do
      {
        v16 = (unsigned int)v12 + v15++;
        *a4++ = *(_QWORD *)&a3[2 * v16 + 12] << 12;
      }
      while ( v15 < (unsigned int)v9 );
      goto LABEL_12;
    }
  }
  return 3221225485LL;
}
