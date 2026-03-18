/*
 * XREFs of NVMeCompleteSubmissionQueueRequests @ 0x14001C11C
 * Callers:
 *     NVMeControllerCompleteAllIORequests @ 0x14001C710 (NVMeControllerCompleteAllIORequests.c)
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     NVMeCompletePendingForwardIoRequests @ 0x14001BEA8 (NVMeCompletePendingForwardIoRequests.c)
 *     _guard_dispatch_icall @ 0x140031000 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall NVMeCompleteSubmissionQueueRequests(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  int v7; // r10d
  unsigned int v11; // r15d
  __int64 v12; // r14
  signed __int32 v13; // ecx
  __int64 v14; // r9
  signed __int32 v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  __int64 v20; // rbx
  __int64 SrbExtension; // rax
  void (__fastcall *v22)(__int64, __int64, _QWORD); // rax

  v7 = a4;
  v11 = 0;
  if ( a3 )
  {
    v12 = 0LL;
    do
    {
      v13 = *(_DWORD *)(v12 + *(_QWORD *)(a2 + 32));
      if ( (v13 & 8) != 0 )
      {
        while ( (!a6 || (v13 & 0x10) == 0) && (a5 == 1 || BYTE1(v13) == v7) )
        {
          v14 = 32LL * v11;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + *(_QWORD *)(a2 + 32)), v13 - 8, v13);
          if ( v13 == v15 )
          {
            v16 = *(_QWORD *)(a2 + 32);
            v17 = *(_QWORD *)(v12 + v16 + 16);
            if ( v17 )
            {
              *(_DWORD *)(v12 + v16) = 0;
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + v14 + 16) = 0LL;
              if ( (v13 & 1) == 0 )
              {
                if ( (v13 & 0x40) != 0 )
                {
                  if ( *(_QWORD *)(v17 + 8) )
                  {
                    v18 = *(_QWORD *)(a2 + 200);
                    do
                    {
                      v19 = v18;
                      *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) = v18;
                      v18 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)(a2 + 200),
                              *(_QWORD *)(v17 + 8),
                              v18);
                    }
                    while ( v18 != v19 );
                    *(_QWORD *)(v17 + 8) = 0LL;
                  }
                  if ( (v13 & 0x80u) != 0 )
                  {
                    v20 = *(_QWORD *)(v17 + 16);
                    StorPortExtendedFunction(1LL, a1, v17, v14);
                    v17 = v20;
                  }
                  if ( !_InterlockedDecrement16((volatile signed __int16 *)v17) )
                    StorPortNotification(0x2000LL, a1, v17);
                }
                else
                {
                  SrbExtension = GetSrbExtension(v17);
                  *(_BYTE *)(v17 + 3) = a7;
                  if ( SrbExtension )
                  {
                    v22 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4192);
                    if ( v22 )
                      v22(a1, v17, 0LL);
                  }
                  NVMeRequestComplete(a1, v17, 0);
                }
              }
              ++*(_DWORD *)(a2 + 140);
              _InterlockedAdd16((volatile signed __int16 *)(a2 + 136), 0xFFFFu);
              v7 = a4;
            }
            else
            {
              *(_DWORD *)(a1 + 4064) |= 0x8000u;
              if ( (*(_DWORD *)(a1 + 128) & 0x40) != 0 )
                MEMORY[6] = -1;
            }
            break;
          }
          v13 = v15;
          if ( (v15 & 8) == 0 )
            break;
        }
      }
      ++v11;
      v12 += 32LL;
    }
    while ( v11 < a3 );
  }
  return NVMeCompletePendingForwardIoRequests(a1, (_QWORD *)a2, v7, a5, 0, a7);
}
