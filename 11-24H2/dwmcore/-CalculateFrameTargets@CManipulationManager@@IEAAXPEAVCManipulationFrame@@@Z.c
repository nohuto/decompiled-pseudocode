/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190EF4
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190190 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18012B5D4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18018ED38 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801911E8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801D82E0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z @ 0x180257D98 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUta.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r9
  bool IsMousewheelFrame; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  struct IManipulationContext *v9; // rbx
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 *v14; // r8
  __int64 v15; // rcx
  struct IManipulationContext *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v4;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 160,
        &v16,
        (struct CManipulationFrame *)((char *)a2 + v8 + 372));
      v9 = v16;
      if ( v16 && ((*(_DWORD *)((_BYTE *)a2 + v8 + 380) & 0x40004) != 0 || IsMousewheelFrame) )
      {
        if ( (int)CGestureTargetingManager::ProcessInput(
                    v16,
                    (struct CManipulationFrame *)((char *)a2 + v8 + 368),
                    (struct CManipulationFrame *)((char *)a2 + v8 + 368)) < 0 )
        {
          *((_DWORD *)v9 + 6) = 1;
        }
        else if ( *((_DWORD *)v9 + 6) != 1 )
        {
          *((_DWORD *)v9 + 6) = 2;
        }
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v16);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a2 + 4) );
  }
  v10 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(v11 + *((_QWORD *)this + 23));
      if ( *(_DWORD *)(v12 + 24) == 2 )
      {
        v13 = ConvertToInputType(*((unsigned int *)a2 + 92), *((unsigned int *)a2 + 95), v12, v5);
        CGestureTargetingManager::ProcessInteractions(v14, v13);
      }
      ++v10;
      v15 = *(_QWORD *)(v11 + *((_QWORD *)this + 23));
      v11 += 8LL;
      *(_DWORD *)(v15 + 24) = 0;
    }
    while ( v10 < *((_DWORD *)this + 48) );
  }
}
