/*
 * XREFs of RaProcessMFNDChildControllerEvent @ 0x14008A178
 * Callers:
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorLogMFNDCCAsyncEvent @ 0x14008F7F0 (StorLogMFNDCCAsyncEvent.c)
 *     StorGetLogForMFNDChildControllerAsyncEvent @ 0x1400C4204 (StorGetLogForMFNDChildControllerAsyncEvent.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaProcessMFNDChildControllerEvent(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 Pool; // rax
  _WORD *v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // r11d
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  __int64 i; // r9
  __int16 v17; // ax
  unsigned int v18; // [rsp+30h] [rbp-30h]
  unsigned int v19; // [rsp+34h] [rbp-2Ch]
  unsigned int v20; // [rsp+38h] [rbp-28h]
  unsigned int v21; // [rsp+3Ch] [rbp-24h]
  unsigned int v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h]

  if ( StorIsMFNDSupported(a1) )
  {
    if ( v2 )
    {
      if ( *(_WORD *)v2 == 1 && *(_DWORD *)(v2 + 4) >= 0x1010u && *(_DWORD *)(v2 + 12) >= 0x1000u )
      {
        v3 = (_BYTE *)(v2 + 16);
        v4 = *(unsigned __int8 *)(v2 + 16);
        if ( (_BYTE)v4 )
        {
          v5 = *(_QWORD *)(v2 + 4096) + 0x40CA5A0F674331E8LL;
          if ( *(_QWORD *)(v2 + 4096) == 0xBF35A5F098BCCE18uLL )
            v5 = *(_QWORD *)(v2 + 4104) + 0x639962DA8026BB5BLL;
          if ( !v5 )
          {
            Pool = RaidAllocatePool(64LL, 40 * v4, 1179476306LL, *(_QWORD *)(a1 + 8));
            v7 = (_WORD *)Pool;
            if ( Pool )
            {
              v8 = (unsigned __int8)*v3;
              v22 = 0;
              v20 = 0;
              v9 = 0;
              v18 = 0;
              v10 = 0LL;
              v11 = Pool + 8 * v8;
              v19 = 0;
              v12 = v11 + 8 * v8;
              v21 = 0;
              v13 = v12 + 8 * v8;
              v14 = v13 + 8 * v8;
              v23 = v14;
              while ( 1 )
              {
                v15 = (unsigned __int8)*v3;
                if ( *v3 >= 0xFDu )
                  v15 = 253LL;
                if ( (unsigned int)v10 >= v15 )
                  break;
                if ( (v3[16 * (unsigned int)v10 + 17] & 0x1F) != 0 )
                {
                  for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
                  {
                    if ( v7[4 * i] == (unsigned __int8)v3[16 * (unsigned int)v10 + 16] )
                      goto LABEL_28;
                  }
                  v7[4 * v10] = (unsigned __int8)v3[16 * (unsigned int)v10 + 16];
                  ++v22;
                  if ( (v3[16 * (unsigned int)v10 + 17] & 0x10) != 0 )
                  {
                    v17 = (unsigned __int8)v3[16 * (unsigned int)v10 + 16];
                    *(_DWORD *)(v11 + 8 * v10 + 4) |= 7u;
                    ++v18;
                    *(_WORD *)(v11 + 8 * v10) = v17;
                    *(_WORD *)(v11 + 8 * v10 + 5) = -11778;
                  }
                  if ( (v3[16 * (unsigned int)v10 + 17] & 2) != 0 )
                  {
                    ++v19;
                    *(_WORD *)(v12 + 8 * v10) = (unsigned __int8)v3[16 * (unsigned int)v10 + 16];
                    *(_DWORD *)(v12 + 8 * v10 + 4) = *(_DWORD *)&v3[16 * (unsigned int)v10 + 20];
                  }
                  if ( (v3[16 * (unsigned int)v10 + 17] & 4) != 0 )
                  {
                    ++v20;
                    *(_WORD *)(v13 + 8 * v10) = (unsigned __int8)v3[16 * (unsigned int)v10 + 16];
                    *(_DWORD *)(v13 + 8 * v10 + 4) = *(_DWORD *)&v3[16 * (unsigned int)v10 + 24];
                  }
                  if ( (v3[16 * (unsigned int)v10 + 17] & 8) != 0 )
                  {
                    *(_WORD *)(v14 + 8 * v10) = (unsigned __int8)v3[16 * (unsigned int)v10 + 16];
                    *(_DWORD *)(v14 + 8 * v10 + 4) = *(_DWORD *)&v3[16 * (unsigned int)v10 + 28];
                    v21 = v9 + 1;
                  }
LABEL_28:
                  StorLogMFNDCCAsyncEvent(a1, v3, (unsigned int)v10, (unsigned int)v10);
                  v14 = v23;
                  v9 = v21;
                }
                v10 = (unsigned int)(v10 + 1);
              }
              if ( v18 && v11 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v18, v11);
              if ( v19 && v12 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v19, v12);
              if ( v20 && v13 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v20, v13);
              if ( v21 && v23 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v21, v23);
              ExFreePoolWithTag(v7, 0x464D6152u);
            }
          }
        }
      }
    }
  }
}
