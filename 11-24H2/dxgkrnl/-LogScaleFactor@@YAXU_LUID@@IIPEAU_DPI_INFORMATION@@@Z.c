/*
 * XREFs of ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403EC644
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1401CADC0 (DxgkUpdateDpiInfoForNewOverride.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogScaleFactor(struct _LUID a1, __int64 a2, __int64 a3, struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  unsigned __int64 v11; // [rsp+58h] [rbp-28h]
  struct _LUID v12; // [rsp+60h] [rbp-20h]

  v5 = 0x480000001ELL;
  v6 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  HIDWORD(v10) = a2;
  v12 = a1;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    LODWORD(v10) = 78;
    v11 = (unsigned int)a3;
  }
  else
  {
    a2 = *((unsigned __int16 *)a4 + 18) | (*((unsigned __int16 *)a4 + 16) << 16);
    LODWORD(v10) = 79;
    v11 = __PAIR64__(*((_DWORD *)a4 + 2), a2);
  }
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentProcessSessionId)(
         a1,
         a2,
         a3,
         a4,
         v5,
         v6,
         v7,
         *((_QWORD *)&v7 + 1),
         v8,
         v9,
         v10,
         v11,
         v12);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v5, v4);
}
