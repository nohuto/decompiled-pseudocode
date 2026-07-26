/*
 * XREFs of KLoaderRegisterModule @ 0x1400E3AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140155D78 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 */

__int64 __fastcall KLoaderRegisterModule(
        struct _DRIVER_OBJECT *a1,
        unsigned __int16 *a2,
        struct _UNICODE_STRING *a3,
        const struct _KLOADER_MODULE_CHARACTERISTICS *a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-20h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      1u,
      0xAu,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (char)a1,
      a2);
  v7 = KLoader::RegisterModule((KLoader *)a1, a1, a3, a3, a4);
  v8 = v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      v10);
  }
  return v8;
}
