/*
 * XREFs of ?IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z @ 0x140057F60
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall IsCaptureDevice(struct IMMDevice *a1)
{
  bool v1; // bl
  struct IMMDeviceVtbl *lpVtbl; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  lpVtbl = a1->lpVtbl;
  v6 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v6) >= 0 )
  {
    v5 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v5) >= 0 )
    {
      v1 = v5 == 1;
      if ( v5 != 1 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x203,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)0x8000FFFFLL);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v1;
}
