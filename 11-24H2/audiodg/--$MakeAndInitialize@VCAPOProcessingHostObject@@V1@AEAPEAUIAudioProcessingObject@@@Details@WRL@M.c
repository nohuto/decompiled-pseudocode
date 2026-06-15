/*
 * XREFs of ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140018E98
 * Callers:
 *     ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140018A90 (-RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z @ 0x140018F68 (-RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ??0CAPOProcessingHostObject@@QEAA@XZ @ 0x14001901C (--0CAPOProcessingHostObject@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOProcessingHostObject,CAPOProcessingHostObject,IAudioProcessingObject * &>(
        CAPOProcessingHostObject **a1,
        struct IAudioProcessingObject **a2)
{
  unsigned int v4; // edi
  CAPOProcessingHostObject *v5; // rax
  CAPOProcessingHostObject *v6; // rbx
  int v7; // ebp
  CAPOProcessingHostObject *v9; // [rsp+40h] [rbp+8h] BYREF
  CAPOProcessingHostObject *v10; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (CAPOProcessingHostObject *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  v6 = CAPOProcessingHostObject::CAPOProcessingHostObject(v5);
  v10 = v6;
  v9 = 0LL;
  v7 = CAPOProcessingHostObject::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v6 + 16LL))(v6);
    return v4;
  }
  if ( v6 )
    (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
  return (unsigned int)v7;
}
