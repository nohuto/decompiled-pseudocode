/*
 * XREFs of RtlpValidateHeap @ 0x1800216B0
 * Callers:
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugCompactHeap @ 0x18011CE28 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x18011D210 (RtlDebugWalkHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011D558 (RtlDebugDestroyHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x18002059C (RtlpCheckBusyBlockTail.c)
 *     RtlpValidateHeapHeaders @ 0x180021CEC (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpValidateHeap(_QWORD *BaseAddress, char a2)
{
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // r13d
  _QWORD *v8; // r14
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  __int64 v11; // rdi
  _DWORD *v12; // r15
  char *v13; // r15
  _QWORD *i; // rdi
  __int64 v15; // r8
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int16 j; // si
  char *v20; // rbx
  __int16 v21; // ax
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // di
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  __int16 v26; // [rsp+90h] [rbp+40h]
  PVOID BaseAddressa; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v25 = (__int64)BaseAddress;
  RegionSize = 0LL;
  BaseAddressa = 0LL;
  if ( (unsigned __int8)RtlpValidateHeapHeaders(BaseAddress) )
  {
    if ( a2 || (BaseAddress[14] & 0x20000000) != 0 )
    {
      v7 = 0;
      v26 = 0;
      v8 = (_QWORD *)BaseAddress[42];
      v9 = 0LL;
      while ( BaseAddress + 42 != v8 )
      {
        v10 = (_DWORD *)BaseAddress + 31;
        v11 = (__int64)(v8 - 2);
        v12 = (_DWORD *)BaseAddress + 31;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_DWORD *)(v11 + 8) ^= *((_DWORD *)BaseAddress + 34);
          if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
          {
            RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, (unsigned __int64)(v8 - 2));
            LOWORD(v9) = v26;
            v12 = (_DWORD *)BaseAddress + 31;
          }
        }
        v8 = (_QWORD *)*v8;
        RegionSize = *(unsigned __int16 *)(v11 + 8);
        v25 = v11;
        if ( (*(_BYTE *)(v11 + 10) & 1) != 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v11);
          v5 = *v10 == 0;
LABEL_7:
          if ( !v5 )
          {
            *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
            *(_DWORD *)(v11 + 8) ^= *((_DWORD *)BaseAddress + 34);
          }
          goto LABEL_9;
        }
        if ( *(_WORD *)(v11 + 8) < (unsigned __int16)v9 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v11);
          v5 = *v12 == 0;
          goto LABEL_7;
        }
        v9 = *(unsigned __int16 *)(v11 + 8);
        v26 = *(_WORD *)(v11 + 8);
        if ( *v10 )
        {
          *(_BYTE *)(v11 + 11) = v9 ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
          *(_DWORD *)(v11 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        ++v7;
      }
      RegionSize = 8LL * *((unsigned __int16 *)BaseAddress + 112) + 1040;
      if ( RtlpValidateHeapTagsEnable
        && BaseAddress[41]
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v13 = (char *)BaseAddressa + 1032;
      }
      else
      {
        v13 = 0LL;
      }
      for ( i = (_QWORD *)BaseAddress[34]; ; i = (_QWORD *)*i )
      {
        v15 = 129LL;
        if ( BaseAddress + 34 == i )
          break;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_DWORD *)i + 14) ^= *((_DWORD *)BaseAddress + 34);
          if ( *((_BYTE *)i + 59) != (*((_BYTE *)i + 56) ^ (unsigned __int8)(*((_BYTE *)i + 57) ^ *((_BYTE *)i + 58))) )
            RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, (unsigned __int64)(i + 6));
        }
        if ( v13 )
        {
          v21 = *((_WORD *)i + 9);
          if ( v21 )
          {
            if ( v21 >= 0 )
            {
              if ( (v21 & 0x800) == 0 && (unsigned __int16)v21 < *((_WORD *)BaseAddress + 112) )
              {
                v9 = *((unsigned __int16 *)i + 9);
                *(_QWORD *)&v13[8 * v9] += i[4] >> 4;
              }
            }
            else
            {
              v9 = 0x7FFFLL;
              v22 = v21 & 0x7FFF;
              if ( v22 < 0x81u )
              {
                v9 = (__int64)BaseAddressa;
                *((_QWORD *)BaseAddressa + v22) += i[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)i + 58) & 4) != 0 && !RtlpCheckBusyBlockTail((__int64)BaseAddress, (unsigned __int64)(i + 6)) )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *((_BYTE *)i + 59) = *((_BYTE *)i + 56) ^ *((_BYTE *)i + 57) ^ *((_BYTE *)i + 58);
            *((_DWORD *)i + 14) ^= *((_DWORD *)BaseAddress + 34);
          }
          return 0;
        }
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)i + 59) = *((_BYTE *)i + 56) ^ *((_BYTE *)i + 57) ^ *((_BYTE *)i + 58);
          *((_DWORD *)i + 14) ^= *((_DWORD *)BaseAddress + 34);
        }
      }
      v16 = (_QWORD *)BaseAddress[36];
      v24 = 0LL;
      while ( v16 != BaseAddress + 36 )
      {
        if ( !(unsigned __int8)RtlpValidateHeapSegment(
                                 BaseAddress,
                                 (__int64)&v24,
                                 (__int64)&v25,
                                 (__int64)v13,
                                 (__int64)BaseAddressa) )
          goto LABEL_9;
        v16 = (_QWORD *)*v16;
      }
      if ( v7 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v15);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v7);
        goto LABEL_9;
      }
      if ( BaseAddress[24] != v24 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v15);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v24,
          BaseAddress[24]);
        goto LABEL_9;
      }
      if ( BaseAddressa )
      {
        v17 = BaseAddress[41];
        if ( v17 )
        {
          v23 = 1;
          v15 = 129LL;
          while ( v23 < 0x81u )
          {
            v17 += 16LL;
            v9 = *(_QWORD *)(v17 + 8);
            if ( *((_QWORD *)BaseAddressa + v23) != v9 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
              else
                DbgPrint("HEAP: ", 1LL, 129LL);
              DbgPrint(
                "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
                v23,
                *(_QWORD *)(v17 + 8),
                *((_QWORD *)BaseAddressa + v23),
                (char *)BaseAddressa + 8 * v23);
              goto LABEL_9;
            }
            ++v23;
          }
        }
        v18 = BaseAddress[29];
        if ( v18 )
        {
          v9 = *((unsigned __int16 *)BaseAddress + 112);
          for ( j = 1; j < (unsigned __int16)v9; ++j )
          {
            v18 += 72LL;
            v20 = &v13[8 * j];
            if ( *(_QWORD *)v20 != *(_QWORD *)(v18 + 8) )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v15);
              else
                DbgPrint("HEAP: ", 1LL, v15);
              DbgPrint(
                "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
                j,
                v18 + 20,
                *(_QWORD *)(v18 + 8),
                *(_QWORD *)v20,
                &v13[8 * j]);
              goto LABEL_9;
            }
          }
        }
        RegionSize = 0LL;
        RtlpSecMemFreeVirtualMemory(v9, &BaseAddressa, &RegionSize, 0x8000LL);
      }
    }
    return 1;
  }
  else
  {
LABEL_9:
    RtlpBreakPointHeap();
    if ( BaseAddressa )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v6, &BaseAddressa, &RegionSize, 0x8000LL);
    }
    return 0;
  }
}
