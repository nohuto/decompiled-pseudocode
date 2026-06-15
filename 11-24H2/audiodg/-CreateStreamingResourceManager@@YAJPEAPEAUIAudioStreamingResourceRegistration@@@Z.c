/*
 * XREFs of ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140014804
 * Callers:
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400147A8 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 * Callees:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140014878 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateStreamingResourceManager(struct IAudioStreamingResourceRegistration **a1)
{
  int v2; // edi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **); // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **); // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v5 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager,>(&v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    v2 = (**v5)(v5, &GUID_be7a4789_2891_49b3_923e_dc97de058472, a1);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioStreamingResourceRegistration **)))(*v3)[2])(v3);
  }
  return (unsigned int)v2;
}
