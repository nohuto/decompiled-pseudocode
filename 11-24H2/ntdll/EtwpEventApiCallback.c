/*
 * XREFs of EtwpEventApiCallback @ 0x18004B650
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1801057CC (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _tlgEnableCallback @ 0x180170590 (_tlgEnableCallback.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  ULONG v2; // esi
  __int64 v4; // r15
  void **v6; // r14
  ULONGLONG v7; // r9
  ULONGLONG v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r10
  char v11; // si
  __int64 v12; // r8
  unsigned __int8 v13; // cl
  unsigned int i; // ecx
  void (__cdecl *v15)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rax
  const GUID *v16; // rcx
  int v18; // r10d
  __int64 v19; // r13
  bool v20; // sf
  __int64 v21; // r10
  void *v22; // r8
  _DWORD *Heap; // rax
  __int64 v24; // [rsp+40h] [rbp-40h]
  ULONGLONG v25; // [rsp+48h] [rbp-38h]
  unsigned __int8 v26; // [rsp+55h] [rbp-2Bh]
  void *Src[2]; // [rsp+58h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a2 + 240);
  v25 = 0LL;
  v6 = 0LL;
  v26 = 0;
  v7 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( v2 == 2 )
  {
    v12 = *(unsigned __int8 *)(a1 + 76);
    v7 = *(_QWORD *)(a1 + 88);
    v8 = *(_QWORD *)(a1 + 96);
    v26 = *(_BYTE *)(a1 + 76);
    v25 = v7;
LABEL_18:
    v24 = v8;
    goto LABEL_11;
  }
  v8 = -1LL;
  v9 = -1LL;
  v24 = -1LL;
  v10 = -1LL;
  if ( *(_BYTE *)(a2 + 116) )
  {
    v11 = 1;
    v8 = *(_QWORD *)(a2 + 96);
    v10 = v8;
    v24 = v8;
    v9 = v8;
    v12 = *(unsigned __int8 *)(a2 + 117);
    v7 = *(_QWORD *)(a2 + 104);
    v25 = v7;
    v26 = *(_BYTE *)(a2 + 117);
  }
  else
  {
    v12 = 0LL;
    v11 = 0;
  }
  if ( *(_BYTE *)(a2 + 236) )
  {
    v13 = *(_BYTE *)(a2 + 237);
    if ( (unsigned __int8)v12 <= v13 )
    {
      v12 = v13;
      v26 = *(_BYTE *)(a2 + 237);
      v9 = v10;
    }
    v7 |= *(_QWORD *)(a2 + 224);
    v8 = v9 & *(_QWORD *)(a2 + 216);
    v25 = v7;
    v24 = v8;
    goto LABEL_10;
  }
  if ( !v11 )
  {
    v2 = 0;
    *(_DWORD *)(a1 + 116) = 0;
    v8 = 0LL;
    goto LABEL_18;
  }
LABEL_10:
  v2 = 1;
LABEL_11:
  for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
  {
    v18 = *(_DWORD *)(a1 + 16LL * i + 132);
    if ( v18 >= 0 || v18 == 0x80000000 )
    {
      v6 = Src;
      v19 = a1 + *(_QWORD *)(a1 + 16LL * i + 120);
      LODWORD(Src[1]) = *(_DWORD *)(a1 + 16LL * i + 128);
      v20 = *(__int16 *)(a1 + 78) < 0;
      Src[0] = (void *)v19;
      HIDWORD(Src[1]) = v18;
      if ( v20 && v18 == 0x80000000 )
      {
        *(_QWORD *)(v19 + 8) = 0LL;
        v21 = 0LL;
        *(_DWORD *)(v19 + 20) = 0;
        *(_DWORD *)(v19 + 16) = Src[1];
        while ( (unsigned int)v21 < 4 )
        {
          if ( *(_BYTE *)(a2 + 24 * v21 + 140)
            && *(unsigned __int8 *)(a2 + 24 * v21 + 142) == (*(_WORD *)(a1 + 78) & 0x7FFF) )
          {
            *(_QWORD *)(v19 + 8) = 1LL << ((unsigned __int8)v21 + 32);
            break;
          }
          v21 = (unsigned int)(v21 + 1);
        }
        if ( v4 )
        {
          EtwpAcquireGuidEntryExclusive(v4);
          v22 = *(void **)(v4 + 168);
          if ( v22 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, LODWORD(Src[1]) + 16LL);
          *(_QWORD *)(v4 + 168) = Heap;
          if ( Heap )
          {
            Heap[2] = Src[1];
            *(_DWORD *)(*(_QWORD *)(v4 + 168) + 12LL) = HIDWORD(Src[1]);
            **(_QWORD **)(v4 + 168) = *(_QWORD *)(v4 + 168) + 16LL;
            memmove(**(void ***)(v4 + 168), Src[0], LODWORD(Src[1]));
          }
          *(_DWORD *)(v4 + 48) = 0;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 40));
          v12 = v26;
          v7 = v25;
          v8 = v24;
        }
      }
      break;
    }
  }
  v15 = *(void (__cdecl **)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))(a2 + 48);
  if ( v15 )
  {
    v16 = (const GUID *)(a1 + 56);
    if ( v15 == tlgEnableCallback )
      tlgEnableCallback(v16, v2, v12, v7, v8, (PEVENT_FILTER_DESCRIPTOR)v6, *(PVOID *)(a2 + 56));
    else
      ((void (__fastcall *)(const GUID *, _QWORD, __int64))v15)(v16, v2, v12);
  }
  return 0LL;
}
