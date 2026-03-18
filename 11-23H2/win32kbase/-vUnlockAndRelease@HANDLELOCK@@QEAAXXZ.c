/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760
 * Callers:
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     HmgFree @ 0x1C0088BA0 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0043870 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // edi
  char EtwGdiHandleType; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // r8
  _DWORD *v25; // r15
  unsigned int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rax
  __int64 v31; // r8
  _QWORD **v32; // r11
  unsigned __int64 v33; // r10
  __int64 v34; // rcx
  unsigned __int64 W32ProcessFromId; // rsi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  int v38; // r8d
  unsigned int v39; // esi
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  v6 = v5 & 0xFFFFFFFE;
  if ( (v5 & 0xFFFFFFFE) != 0 && v6 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v6, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v34);
      --*(_DWORD *)(W32ProcessFromId + 60);
      GreReleaseHmgrSemaphore(v36);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(*(_QWORD *)this + 14LL), a2, a3, a4);
  v9 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 8008LL);
  v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v9, **(_DWORD **)this & 0xFFFFFF);
  v11 = *(_QWORD *)(v9 + 16);
  v12 = v10;
  v13 = *(unsigned int *)(v11 + 2056);
  v14 = (unsigned int)v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16);
  if ( v10 >= (unsigned int)v14
    || (v10 >= (unsigned int)v13
      ? (v14 = ((v10 - (unsigned int)v13) >> 16) + 1,
         v11 = *(_QWORD *)(v11 + 8 * v14 + 8),
         v12 = -65536 * ((v10 - (unsigned int)v13) >> 16) - (_DWORD)v13 + v10)
      : (v11 = *(_QWORD *)(v11 + 8)),
        (unsigned int)v12 >= *(_DWORD *)(v11 + 20)) )
  {
    v15 = 0LL;
  }
  else
  {
    v14 = 2LL * (unsigned __int8)v12;
    v15 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  }
  v16 = *v15;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v37 = (_DWORD *)SGDGetUserSessionState(v14, v15, v11, v13);
    McTemplateK0pqqq_EtwWriteTransfer(*v37, (unsigned int)&GdiDestroyHandle, v38, v16, EtwGdiHandleType, *v37, v6);
  }
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v5 & 1;
  v17 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
  v18 = *(_QWORD *)(v17 + 8008);
  v19 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v17) + 24) + 8008LL);
  v20 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v19, **(_DWORD **)this & 0xFFFFFF);
  v21 = *(_QWORD *)(v19 + 16);
  v22 = v20;
  v23 = *(_DWORD *)(v21 + 2056);
  if ( v20 >= v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16)
    || (v20 >= v23
      ? (v24 = *(_QWORD *)(v21 + 8LL * (((v20 - v23) >> 16) + 1) + 8), v22 = -65536 * ((v20 - v23) >> 16) - v23 + v20)
      : (v24 = *(_QWORD *)(v21 + 8)),
        (unsigned int)v22 >= *(_DWORD *)(v24 + 20)) )
  {
    v25 = 0LL;
  }
  else
  {
    v25 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
  }
  v26 = (unsigned __int16)*v25 | (*v25 >> 8) & 0xFF0000;
  if ( v26 >= 0x10000 )
  {
    if ( *(_DWORD *)v18 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v18 + 16),
                                  (unsigned __int16)*v25,
                                  1)
           + 13) == HIWORD(v26) )
        v26 = (unsigned __int16)v26;
    }
    else
    {
      v26 = (unsigned __int16)*v25;
    }
  }
  v27 = *(_QWORD *)(v18 + 24);
  if ( v27 )
  {
    v39 = *(_DWORD *)(4LL * (unsigned __int16)v26 + v27);
    if ( v39 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v18 + 16), v39, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v18 + 16), v39, 1);
      *(_DWORD *)(4LL * (unsigned __int16)v26 + *(_QWORD *)(v18 + 24)) = 0;
      --*(_DWORD *)(v18 + 4);
    }
  }
  v28 = *(_QWORD *)(v18 + 16);
  v29 = *(_DWORD *)(v28 + 2056);
  if ( v26 < v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
  {
    if ( v26 >= v29 )
    {
      v31 = *(_QWORD *)(v28 + 8LL * (((v26 - v29) >> 16) + 1) + 8);
      v26 += -65536 * ((v26 - v29) >> 16) - v29;
      v30 = v31;
    }
    else
    {
      v30 = *(_QWORD *)(v28 + 8);
      v31 = v30;
    }
    if ( v26 >= *(_DWORD *)(v31 + 20) )
    {
      v32 = (_QWORD **)(v30 + 24);
    }
    else
    {
      v32 = (_QWORD **)(v31 + 24);
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                     + 16LL * (unsigned __int8)v26
                     + 8) )
      {
        v33 = (unsigned __int64)v26 >> 8;
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * v33) + 16LL * (unsigned __int8)v26 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v31 + 24LL * v26) = *(unsigned int *)(v31 + 12);
        --*(_DWORD *)(v31 + 16);
        *(_DWORD *)(v31 + 12) = v26;
LABEL_24:
        ExReleasePushLockExclusiveEx(*(_QWORD *)(**v32 + 8 * v33) + 16LL * (unsigned __int8)v26, 0LL);
        KeLeaveCriticalRegion();
        *(_BYTE *)v28 = 0;
        goto LABEL_25;
      }
    }
    v33 = (unsigned __int64)v26 >> 8;
    goto LABEL_24;
  }
LABEL_25:
  *(_QWORD *)v25 = 0LL;
  --*(_DWORD *)(v18 + 4);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
