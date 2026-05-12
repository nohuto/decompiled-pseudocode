/*
 * XREFs of StorGetAndLogMFNDQoSStatistics @ 0x1400C3798
 * Callers:
 *     StorGetAndLogMFNDQoSStatisticsWorkRoutine @ 0x1400C3A30 (StorGetAndLogMFNDQoSStatisticsWorkRoutine.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C36B0 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400C4798 (StorLogMFNDCCQoSStatisticsInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

void __fastcall StorGetAndLogMFNDQoSStatistics(__int64 a1, int a2, char a3, unsigned int a4, unsigned __int16 *a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  unsigned int v9; // ebx
  unsigned __int16 *Pool; // rdi
  void *v11; // r15
  __int64 v12; // r12
  unsigned __int16 *v13; // rbx
  unsigned __int16 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // r9d
  unsigned int v20; // eax
  __int64 i; // rdx
  unsigned __int64 v22; // rcx
  int v23; // [rsp+68h] [rbp-31h]
  _DWORD v24[15]; // [rsp+78h] [rbp-21h] BYREF
  int v25; // [rsp+B4h] [rbp+1Bh]

  v6 = a4;
  memset_0(v24, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 6152);
  if ( v7 )
    v8 = *(unsigned __int16 *)(v7 + 8) - 1;
  else
    v8 = 255;
  v9 = (v8 << 8) + 8;
  Pool = (unsigned __int16 *)RaidAllocatePool(64LL, v9, 1179476306LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    LOBYTE(v25) = 2;
    v25 |= 0xFFFF00u;
    v24[10] = v9 >> 2;
    v24[0] = 210;
    v23 = StorSendMFNDCommand(a1, (_DWORD)Pool, 0, v9, (__int64)v24);
    v11 = (void *)RaidAllocatePool(64LL, 0x2000LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( v11 )
    {
      if ( (_DWORD)v6 )
      {
        v12 = v6;
        v13 = a5;
        do
        {
          v14 = *v13;
          if ( (unsigned __int16)(*v13 - 1) <= 0xFFFDu )
          {
            memset_0(v24, 0, 0x40uLL);
            StorBuildMFNDGetSingleCCLogPageCommand((__int64)v24, v14, 209, (a3 & 2) != 0, a3 & 1, 0x2000u);
            v15 = 0LL;
            if ( (int)StorSendMFNDCommand(a1, (_DWORD)v11, 0, 0x2000, (__int64)v24) >= 0 )
            {
              v16 = 0LL;
              v17 = 0LL;
              v18 = 0LL;
              v19 = 1;
              if ( v23 >= 0 )
              {
                v20 = *Pool;
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v19 = 1;
                  if ( (unsigned int)i >= v20 )
                    break;
                  v22 = (unsigned __int64)(unsigned int)i << 8;
                  if ( *(unsigned __int16 *)((char *)Pool + v22 + 8) == a5[i] )
                  {
                    v16 = *(_QWORD *)((char *)Pool + v22 + 80);
                    v19 = 0;
                    v17 = *(_QWORD *)((char *)Pool + v22 + 88);
                    v18 = *(_QWORD *)((char *)Pool + v22 + 96);
                    v15 = *(_QWORD *)((char *)Pool + v22 + 104);
                    break;
                  }
                  v20 = *Pool;
                }
              }
              StorLogMFNDCCQoSStatisticsInfo(a1, *v13, a2, v19, (__int64)v11, v16, v17, v18, v15);
            }
          }
          ++v13;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v11, 0x464D6152u);
    }
    ExFreePoolWithTag(Pool, 0x464D6152u);
  }
}
