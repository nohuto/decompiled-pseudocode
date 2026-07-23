/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x180119B8C
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18007CB10 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetFirstBlockAddress @ 0x18009DB00 (RtlpGetFirstBlockAddress.c)
 *     RtlpInitializeLfhBitmapData @ 0x1800E0F50 (RtlpInitializeLfhBitmapData.c)
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180116EC4 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpProtectBlock @ 0x18014E304 (RtlpProtectBlock.c)
 */

__int64 __fastcall RtlpSubSegmentDebugInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int16 FirstBlockAddress; // ax
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned int v20; // r13d
  unsigned __int64 v21; // rbx
  unsigned int v22; // eax
  signed __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v28; // [rsp+30h] [rbp-38h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]
  int v30; // [rsp+88h] [rbp+20h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned __int8 *)(a2 + 43);
  LODWORD(v28) = v11;
  v13 = *(unsigned __int8 *)(a7 + 2);
  if ( (_BYTE)v12 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192 * v12;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  *(_QWORD *)a3 = a2;
  v15 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v29 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v16 = (a6 + a3 - v15) / v29;
  HIWORD(v30) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  FirstBlockAddress = RtlpGetFirstBlockAddress((unsigned __int16 *)a2, v15);
  v18 = (unsigned __int16)(FirstBlockAddress - a3);
  LOWORD(v30) = FirstBlockAddress - a3;
  *(_DWORD *)(a3 + 24) = v30 ^ a1 ^ RtlpLFHKey ^ a3;
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData((__int64 *)(a3 + 32));
  v19 = a3 + v18;
  v20 = 0;
  if ( (_DWORD)v16 )
  {
    v21 = v29;
    do
    {
      v22 = *(_DWORD *)(v19 + 12) & 0xFF0000FF;
      *(_DWORD *)(v19 + 8) = RtlpLFHKey ^ *(_DWORD *)(a1 + 24) ^ (v19 >> 4) ^ (((_DWORD)v19 - (_DWORD)a3) << 12);
      *(_DWORD *)(v19 + 12) = v22 | ((unsigned __int16)v20 << 8);
      *(_BYTE *)(v19 + 15) = 0x80;
      RtlpProtectBlock(a2, v19);
      v19 += v21;
      ++v20;
    }
    while ( v20 < (unsigned int)v16 );
    v11 = v28;
  }
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v23 = *(_QWORD *)(v14 + 160);
    LODWORD(v28) = v23 + v16;
    if ( (int)v16 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v28) = v24;
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 160), v28, v23) != v23 );
  v25 = *(_QWORD *)v14;
  *(_DWORD *)(v14 + 168) = ++*(_DWORD *)(v25 + 32);
  _InterlockedOr(v27, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v16, v11);
  if ( RtlGetCurrentServiceSessionId() )
    v26 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v26 = 2147353472LL;
  if ( *(_BYTE *)v26 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentInitialize(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
