/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400FB590
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400CC078 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        struct VIDMM_HEAP_ALLOC **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v13; // rcx
  char v14; // r8
  int v15; // ebx
  PLOOKASIDE_LIST_EX **v16; // rcx
  PLOOKASIDE_LIST_EX **v17; // rcx
  int v18; // eax
  char *v20; // [rsp+50h] [rbp-48h] BYREF
  char v21; // [rsp+58h] [rbp-40h]
  char i; // [rsp+A0h] [rbp+8h]

  v20 = (char *)a1 + 1328;
  v21 = 0;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v13, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v14 = 0;
  v15 = -1073741823;
  for ( i = 0; ; i = 1 )
  {
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 736);
          goto LABEL_43;
        case 2:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 808);
          goto LABEL_43;
        case 3:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 880);
          goto LABEL_43;
        case 4:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 952);
          goto LABEL_43;
        case 5:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 1024);
          goto LABEL_43;
        case 6:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 1096);
          goto LABEL_43;
        case 7:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 1168);
          goto LABEL_43;
        case 8:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 1240);
LABEL_43:
          v18 = VIDMM_RECYCLE_HEAP::Allocate(v16, a2, a3, a5, a6, 0LL, a8, a9);
          goto LABEL_44;
      }
    }
    else if ( a4 > 6 )
    {
      switch ( a4 )
      {
        case 7:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 448);
          goto LABEL_43;
        case 8:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 520);
          goto LABEL_43;
        case 9:
          v17 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 592);
          goto LABEL_39;
        case 10:
          v17 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 664);
LABEL_39:
          v18 = VIDMM_RECYCLE_HEAP::Allocate(v17, a2, a3, a5, a6, a7, a8, a9);
LABEL_44:
          v14 = i;
          v15 = v18;
          break;
      }
    }
    else
    {
      switch ( a4 )
      {
        case 6:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 376);
          goto LABEL_43;
        case 1:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 16);
          goto LABEL_43;
        case 2:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 88);
          goto LABEL_43;
        case 3:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 160);
          goto LABEL_43;
        case 4:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 232);
          goto LABEL_43;
        case 5:
          v16 = (PLOOKASIDE_LIST_EX **)((char *)a1 + 304);
          goto LABEL_43;
      }
    }
    if ( v15 >= 0 || v14 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    v14 = 1;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v20);
  return (unsigned int)v15;
}
