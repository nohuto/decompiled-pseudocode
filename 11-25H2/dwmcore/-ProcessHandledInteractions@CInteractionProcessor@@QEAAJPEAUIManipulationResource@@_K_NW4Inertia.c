/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x1801F1A9C
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801F19E0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsManipulationCaptured@CManipulation@@UEAA_NXZ @ 0x1801F1EB0 (-IsManipulationCaptured@CManipulation@@UEAA_NXZ.c)
 *     ?GetCaptureSettings@CManipulation@@UEAA?AW4SystemManipulationMode@@XZ @ 0x1801F1ED0 (-GetCaptureSettings@CManipulation@@UEAA-AW4SystemManipulationMode@@XZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F1EE0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@AEAUInteractionOutput@@@Z @ 0x1801F2010 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        CManipulation *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct ManipulationThreadTelemetryData *a6,
        struct IDCompositionInteractionStats *a7,
        _DWORD *a8)
{
  int v8; // r12d
  bool (__fastcall *v12)(CManipulation *__hidden); // rax
  bool v14; // r15
  __int64 (__fastcall *v15)(CManipulation *); // rax
  int CaptureSettings; // eax
  char v17; // cl
  __int64 v19; // rbx
  struct IDCompositionInteractionStats *v20; // r15
  bool v21; // r9
  bool v22; // r8
  bool v23; // r9
  __int64 v24; // rax
  int v25; // eax
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  _DWORD v30[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  _BYTE v37[64]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = 0;
  v29 = a3;
  if ( a8 )
    *a8 = 1;
  v14 = 1;
  if ( (*(_BYTE *)(a1 + 808) & 0x20) == 0 || *(_DWORD *)(a1 + 784) == 1 )
  {
    v12 = *(bool (__fastcall **)(CManipulation *__hidden))(*(_QWORD *)a2 + 48LL);
    if ( !(v12 == CManipulation::IsManipulationCaptured ? CManipulation::IsManipulationCaptured(a2) : v12(a2)) )
      v14 = 0;
  }
  v15 = *(__int64 (__fastcall **)(CManipulation *))(*(_QWORD *)a2 + 40LL);
  if ( (char *)v15 == (char *)CManipulation::GetCaptureSettings )
    CaptureSettings = CManipulation::GetCaptureSettings(a2);
  else
    CaptureSettings = v15(a2);
  if ( !CaptureSettings
    || (*(unsigned int (__fastcall **)(CManipulation *))(*(_QWORD *)a2 + 40LL))(a2) == 2 && *(_DWORD *)(a1 + 788) == 3
    || v14
    || *(_DWORD *)(a1 + 788) == 6 )
  {
    if ( a8 )
      *a8 = 2;
    v17 = *(_BYTE *)(a1 + 808);
    if ( (v17 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 808) = (16 * a4) | v17 & 0xEF;
      if ( a5 )
      {
        v25 = *(_DWORD *)(a1 + 812);
        v26 = *(_BYTE *)(a1 + 148);
        v31 = 0;
        v30[1] = v25;
        v30[2] = *(_DWORD *)(a1 + 816);
        v30[3] = *(_DWORD *)(a1 + 820);
        v30[0] = 3;
        v31 = ((v26 >> 4) ^ 4) & 1 ^ 4 ^ ((v26 >> 4) ^ ((v26 >> 4) ^ 4) & 1 ^ 4) & 2;
        (*(void (__fastcall **)(CManipulation *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v30);
        if ( a5 == 2 )
        {
          v27 = *(_QWORD *)a2;
          v30[0] = 0;
          (*(void (__fastcall **)(CManipulation *, _DWORD *))(v27 + 32))(a2, v30);
        }
        *(_DWORD *)(a1 + 1268) = a5;
        return (unsigned int)v8;
      }
      v28 = 0LL;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v28);
      CInteractionProcessor::GetInteractionContext(a1);
      v19 = v28;
      if ( v28 )
      {
        v35 = 0LL;
        v36 = 0;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        if ( a4 )
        {
          if ( (*(_BYTE *)(a1 + 808) & 0x20) != 0
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 88LL))(v28) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 96LL))(v19, 0LL) )
            {
              v20 = a7;
              if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int128 *))(*(_QWORD *)v19 + 120LL))(
                     v19,
                     *(_QWORD *)(a1 + 832),
                     v29,
                     a1 + 1180,
                     &v32) )
              {
                CInteractionProcessor::ProcessOutput(
                  (CInteractionProcessor *)a1,
                  a2,
                  a4,
                  v23,
                  a6,
                  a7,
                  (struct InteractionOutput *)&v32);
              }
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19);
            }
            else
            {
              v20 = a7;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 80LL))(v19, 0LL);
          }
          else
          {
            v20 = a7;
          }
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, a1 + 1180, &v32);
          if ( v8 < 0 )
            goto LABEL_28;
          v22 = a4;
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 96LL))(v28, 0LL) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 80LL))(v19, 0LL);
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 40LL))(v19, v37);
          v20 = a7;
          v22 = 0;
          v32 = *(_OWORD *)v24;
          v33 = *(_OWORD *)(v24 + 16);
          v34 = *(_OWORD *)(v24 + 32);
          v35 = *(_QWORD *)(v24 + 48);
          v36 = *(_DWORD *)(v24 + 56);
        }
        CInteractionProcessor::ProcessOutput(
          (CInteractionProcessor *)a1,
          a2,
          v22,
          v21,
          a6,
          v20,
          (struct InteractionOutput *)&v32);
      }
LABEL_28:
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return (unsigned int)v8;
}
