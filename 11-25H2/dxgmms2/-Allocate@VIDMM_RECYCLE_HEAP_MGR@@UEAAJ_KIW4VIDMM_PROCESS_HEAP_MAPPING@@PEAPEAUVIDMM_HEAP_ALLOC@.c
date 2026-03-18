/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400EC4F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C5784 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
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
  char v13; // r8
  int v14; // ebx
  VIDMM_RECYCLE_HEAP *v15; // rcx
  int v16; // eax
  VIDMM_RECYCLE_HEAP *v18; // rcx
  __int64 v19; // rcx
  char *v20; // [rsp+50h] [rbp-48h] BYREF
  char v21; // [rsp+58h] [rbp-40h]
  char i; // [rsp+A0h] [rbp+8h]

  v20 = (char *)a1 + 1328;
  v21 = 0;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v19, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v13 = 0;
  v14 = -1073741823;
  for ( i = 0; ; i = 1 )
  {
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 736);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 808);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 880);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 952);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1024);
          break;
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1096);
          break;
        case 7:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1168);
          break;
        case 8:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1240);
          break;
        default:
          goto LABEL_12;
      }
    }
    else if ( a4 > 6 )
    {
      if ( a4 == 7 )
      {
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 448);
      }
      else
      {
        if ( a4 != 8 )
        {
          if ( a4 == 9 )
          {
            v18 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 592);
          }
          else
          {
            if ( a4 != 10 )
              goto LABEL_12;
            v18 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 664);
          }
          v16 = VIDMM_RECYCLE_HEAP::Allocate(v18, a2, a3, a5, a6, a7, a8, a9);
          goto LABEL_11;
        }
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 520);
      }
    }
    else
    {
      switch ( a4 )
      {
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 376);
          break;
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 88);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 160);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 232);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 304);
          break;
        default:
          goto LABEL_12;
      }
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v15, a2, a3, a5, a6, 0LL, a8, a9);
LABEL_11:
    v13 = i;
    v14 = v16;
LABEL_12:
    if ( v14 >= 0 || v13 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    v13 = 1;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v20);
  return (unsigned int)v14;
}
