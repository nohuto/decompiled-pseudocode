/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1400FB1E8
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400FAE10 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140036650 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x14004DD0C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1400953B8 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x14009B148 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400FB658 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rsi
  void *v8; // r12
  struct _RTL_BALANCED_NODE *v9; // rbx
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  PVOID v16; // rax
  __int64 v17; // rcx
  void *v18; // r12
  struct _RTL_BALANCED_NODE *v19; // r14
  struct _RTL_BALANCED_NODE *v20; // rax
  __int64 v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h]
  struct VIDMM_PARTITION **v27; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v29[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  _QWORD v35[30]; // [rsp+C0h] [rbp-40h] BYREF

  v27 = a2;
  v3 = 0LL;
  v4 = -1LL;
  memset(v35, 0, sizeof(v35));
  v5 = 0;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 574LL) )
    {
      v29[1] = 0;
      v33 = 0;
      v23 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
      v29[0] = 48;
      p_DestinationString = &DestinationString;
      v30 = 0LL;
      v32 = 64;
      v34 = 0LL;
      if ( (int)ZwOpenPartition(&v23, 2031619LL, v29) >= 0 )
      {
        v4 = v23;
        v5 = 1;
      }
    }
  }
  HIDWORD(v35[0]) = -1;
  LODWORD(v35[1]) = -1;
  v6 = ZwManagePartition(v4, 0LL, 0LL, v35, 240);
  LODWORD(v7) = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(1LL, v6);
    WdLogGlobalForLineNumber = 186;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    goto LABEL_36;
  }
  v8 = (void *)LODWORD(v35[29]);
  v25 = &VIDMM_PARTITION::_PartitionLock;
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v9 = VIDMM_PARTITION::_PartitionTree;
  v26 = 2;
  while ( v9 )
  {
    v10 = CompareVidMmPartitionById(v8, v9);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v9 = v9->Children[1];
    }
    else
    {
      v9 = v9->Children[0];
    }
  }
  if ( v9 )
    goto LABEL_8;
  v13 = v35[6] << 12;
  v14 = operator new(80LL, 0x62356956u, 256LL);
  v3 = v14;
  if ( !v14 )
  {
    v3 = 0LL;
    _InterlockedIncrement(&dword_1400817E4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 210;
    DxgkLogInternalTriageEvent(v21, 262145LL);
    LODWORD(v7) = -1073741801;
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v24);
    goto LABEL_36;
  }
  *(_DWORD *)(v14 + 32) = (_DWORD)v8;
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_DWORD *)(v14 + 36) = 0;
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_QWORD *)(v14 + 56) = 0LL;
  *(_QWORD *)(v14 + 64) = 0LL;
  *(_DWORD *)(v14 + 72) = 0;
  *(_QWORD *)(v14 + 48) = v13;
  LODWORD(v7) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v14);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 218;
LABEL_24:
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v24);
LABEL_35:
    VIDMM_PARTITION::`scalar deleting destructor'((VIDMM_PARTITION *)v3);
    v3 = 0LL;
LABEL_36:
    if ( v4 != -1 )
      ObCloseHandle((HANDLE)v4, 0);
    goto LABEL_9;
  }
  LODWORD(v7) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v3);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 225;
    goto LABEL_24;
  }
  v16 = 0LL;
  if ( v4 != -1 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle((HANDLE)v4, 0, PsPartitionType, 0, &Object, 0LL);
    v16 = Object;
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(1LL, v7);
      WdLogGlobalForLineNumber = 235;
      DxgkLogInternalTriageEvent(v17, 0x40000LL);
      goto LABEL_24;
    }
  }
  v18 = (void *)*(unsigned int *)(v3 + 32);
  LOBYTE(v15) = 0;
  *(_QWORD *)(v3 + 24) = v16;
  v9 = (struct _RTL_BALANCED_NODE *)v3;
  *(_DWORD *)(v3 + 72) = v5 | *(_DWORD *)(v3 + 72) & 0xFFFFFFFE;
  v19 = VIDMM_PARTITION::_PartitionTree;
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_29;
  while ( (int)CompareVidMmPartitionById(v18, v19) >= 0 )
  {
    v20 = v19->Children[1];
    if ( !v20 )
    {
      LOBYTE(v15) = 1;
      goto LABEL_29;
    }
LABEL_32:
    v19 = v20;
  }
  v20 = v19->Children[0];
  if ( v19->Children[0] )
    goto LABEL_32;
  LOBYTE(v15) = 0;
LABEL_29:
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v19, v15, v3);
LABEL_8:
  v3 = (__int64)v9;
  _InterlockedIncrement((volatile signed __int32 *)&v9[1].Right + 1);
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v24);
  *((_QWORD *)a1 + 38) = v4;
  if ( (int)v7 < 0 )
  {
    if ( !v9 )
      goto LABEL_36;
    goto LABEL_35;
  }
LABEL_9:
  *v27 = (struct VIDMM_PARTITION *)v3;
  return (unsigned int)v7;
}
