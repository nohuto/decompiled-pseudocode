/*
 * XREFs of ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013AAB0
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF928 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800F0500 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x18013AA70 (-Create@-$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z @ 0x1802499E4 (-AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x180295C28 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1802A9D10 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::GetWeakReference(CResource *this, struct IUnknownWeakRef **a2)
{
  HANDLE ProcessHeap; // rax
  char *v6; // rax
  _QWORD *v7; // rbx
  void (__fastcall *v8)(_QWORD *); // rax

  if ( *((_QWORD *)this + 2) )
    goto LABEL_2;
  ProcessHeap = GetProcessHeap();
  v6 = (char *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CMILCOMWeakRef::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
    v7[7] = this;
    *v7 = &CResourceWeakRef::`vftable';
    v8 = (void (__fastcall *)(_QWORD *))*(&CResourceWeakRef::`vftable' + 1);
    v7[8] = this;
    v7[9] = 0LL;
    v7[10] = 0LL;
    v7[11] = 0LL;
    v8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 2, (signed __int64)v7, 0LL) )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
LABEL_2:
    *a2 = (struct IUnknownWeakRef *)*((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    return 0LL;
  }
  return 2147942414LL;
}
