/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801907D8
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18012C1AC (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190190 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18012B890 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18019112C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180191320 (-ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@.c)
 *     ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x1801914D0 (-TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180194F9C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v2; // ebp
  unsigned __int64 i; // r15
  unsigned __int64 v6; // r10
  __int64 v7; // r14
  char *v8; // r12
  unsigned __int64 v9; // rax
  int Key; // eax
  __int64 v11; // rcx
  struct CManipulationContext *v12; // rbx
  int v13; // ecx
  void *v14; // r8
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r8
  int v18; // eax
  struct CManipulationContext *v19; // [rsp+60h] [rbp+8h] BYREF
  void *v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  for ( i = 0LL; v2 < *((_DWORD *)a2 + 4); ++v2 )
  {
    v6 = *((_QWORD *)this + 35);
    v7 = 248LL * v2;
    v8 = (char *)a2 + v7;
    if ( v6 )
      v9 = *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v7 + 448) / v6)
         + *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v7 + 448) % v6) / v6;
    else
      v9 = 1000LL * *(unsigned int *)((char *)a2 + v7 + 432);
    if ( i >= v9 )
      v9 = i;
    i = v9;
    if ( (*((_BYTE *)a2 + 176) & 2) == 0 || *(_QWORD *)((char *)a2 + v7 + 392) == -1LL )
    {
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (char *)this + 160,
              v8 + 372);
      if ( Key == -1 )
      {
        v12 = 0LL;
        v19 = 0LL;
      }
      else
      {
        v12 = *(struct CManipulationContext **)(*(_QWORD *)(v11 + 8) + 8LL * Key);
        v19 = v12;
        if ( v12 )
          (**(void (__fastcall ***)(struct CManipulationContext *))v12)(v12);
      }
      v13 = *(_DWORD *)((char *)a2 + v7 + 380);
      if ( (v13 & 0x20002) == 0x20002 && (v13 & 4) == 0 || (v13 & 0x20000) != 0 && (v13 & 6) == 0 )
      {
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v19, (char *)this + 240);
        v12 = v19;
      }
      v14 = 0LL;
      v20 = 0LL;
      if ( v12 )
      {
        CManipulationManager::TargetPointer(this, v12, a2, v2, &v20);
        v14 = v20;
      }
      *(_QWORD *)((char *)a2 + v7 + 392) = v14;
      if ( v14 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 176) |= 1u;
        if ( (*((_BYTE *)a2 + 176) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, *((_DWORD *)v8 + 93), v14, v2);
      }
      if ( v12 )
        (*(void (__fastcall **)(struct CManipulationContext *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v15 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v16 = 0LL;
    do
    {
      v17 = 0LL;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 95) & 0x800000) != 0 )
      {
        v18 = *((_DWORD *)a2 + 110);
        if ( v18 == 571 )
        {
          v17 = 1LL;
        }
        else if ( v18 == 572 )
        {
          v17 = 2LL;
        }
      }
      CGestureTargetingManager::ProcessHandledInteractionsForNonHandlers(
        *(_QWORD *)(v16 + *((_QWORD *)this + 23)),
        i,
        v17,
        (char *)a2 + 184);
      ++v15;
      v16 += 8LL;
    }
    while ( v15 < *((_DWORD *)this + 48) );
  }
}
