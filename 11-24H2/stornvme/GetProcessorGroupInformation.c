/*
 * XREFs of GetProcessorGroupInformation @ 0x14001A010
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x14001C804 (NVMeControllerFilterResourceRequirements.c)
 * Callees:
 *     FreeProcessorGroupInfo @ 0x140017170 (FreeProcessorGroupInfo.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // r14
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // si
  __int64 *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ecx
  unsigned int v17; // eax

  FreeProcessorGroupInfo(a1, a2, a3, a4);
  v5 = (unsigned __int16 *)(a1 + 232);
  StorPortExtendedFunction(18LL, a1, a1 + 232, v6);
  v10 = *(unsigned __int16 *)(a1 + 232);
  v11 = 0;
  if ( (_WORD)v10
    && (v12 = (__int64 *)(a1 + 248),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v10), 1701672526LL),
        *(_QWORD *)(a1 + 248)) )
  {
    v13 = (16 * (unsigned int)*v5) >> 2;
    if ( v13 )
      memset(*(void **)(a1 + 248), 0, 4LL * v13);
    if ( *v5 )
    {
      v14 = *v12;
      do
      {
        v15 = 16LL * v11;
        StorPortExtendedFunction(19LL, a1, v11, v15 + v14 + 8);
        *(_WORD *)(v15 + *v12) = v11++;
        v16 = *(_DWORD *)(v15 + *v12 + 8) - ((*(_DWORD *)(v15 + *v12 + 8) >> 1) & 0x55555555);
        *(_WORD *)(v15 + *v12 + 2) = (unsigned __int16)((16843009
                                                       * (((v16 & 0x33333333)
                                                         + ((v16 >> 2) & 0x33333333)
                                                         + (((v16 & 0x33333333) + ((v16 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v17 = HIDWORD(*(_QWORD *)(v15 + *v12 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)(v15 + *v12 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(v15 + *v12 + 2) += (unsigned __int16)((16843009
                                                        * (((v17 & 0x33333333)
                                                          + ((v17 >> 2) & 0x33333333)
                                                          + (((v17 & 0x33333333) + ((v17 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v14 = *v12;
        *(_WORD *)(a1 + 234) += *(_WORD *)(v15 + *v12 + 2);
      }
      while ( v11 < *v5 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1, v7, v8, v9);
    return 0;
  }
}
