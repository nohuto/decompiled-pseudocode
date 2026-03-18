/*
 * XREFs of ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x140351008
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140033498 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(__int64 a1)
{
  char *v2; // rcx
  unsigned int i; // ebp
  __int64 v4; // rdi
  __int64 v5; // rdi
  char *v7; // rbx

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    {
      v4 = *(_QWORD *)a1 + 16LL * i;
      if ( *(_BYTE *)(v4 + 8) )
      {
        *(_BYTE *)(v4 + 8) = 0;
        v5 = *(_QWORD *)v4;
        if ( *(struct _KTHREAD **)(v5 + 24) != KeGetCurrentThread() )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v5, 0LL, 0LL);
          WdLogGlobalForLineNumber = 570;
        }
        if ( *(int *)(v5 + 32) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 573;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*(_DWORD *)(v5 + 32))-- == 1 )
        {
          *(_QWORD *)(v5 + 24) = 0LL;
          ExReleasePushLockExclusiveEx(v5 + 8, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  else if ( v2 )
  {
    v7 = v2 - 8;
    `vector destructor iterator'(
      v2,
      16LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  }
}
