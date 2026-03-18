/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02292B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0026E54 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02293AC (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C022A3FC (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v4; // rdi
  __int64 v5; // rbp
  struct DirectComposition::CResourceMarshaler **v6; // rdi
  __int64 v7; // rbp
  char *v8; // rcx
  struct DirectComposition::CWeakReferenceBase *v9; // rdx
  struct DirectComposition::CWeakReferenceBase *v10; // rdx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v11; // rcx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  v4 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 328);
  v5 = 3LL;
  do
  {
    if ( *v4 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v4);
      *v4 = 0LL;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 264);
  v7 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *(v6 - 4));
    v8 = (char *)*v6;
    *(v6 - 4) = 0LL;
    if ( v8 )
    {
      Win32FreePool(v8);
      *v6 = 0LL;
    }
    v6[4] = 0LL;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 27);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v9);
    *((_QWORD *)this + 27) = 0LL;
  }
  v10 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 28);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
    *((_QWORD *)this + 28) = 0LL;
  }
  v11 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)*((_QWORD *)this + 56);
  if ( v11 )
  {
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(v11, a2, *((_DWORD *)this + 8));
    *((_QWORD *)this + 56) = 0LL;
  }
}
