/*
 * XREFs of ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x180065090
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064F70 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x1800651B8 (--$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampSystemBamStart(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_SESSION *a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  HRESULT ClassObject; // edi
  LPVOID ppv; // [rsp+30h] [rbp-10h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v8; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+80h] [rbp+40h] BYREF
  __int64 v10; // [rsp+88h] [rbp+48h] BYREF

  v8 = a1;
  v2 = 0;
  v3 = (_DWORD *)((char *)a2 + 88);
  v10 = 0LL;
  ppv = 0LL;
  v9 = 0LL;
  if ( (unsigned __int8)RtlIsMultiSessionSku() && !*v3 )
    goto LABEL_14;
  ClassObject = CoGetClassObject(
                  &GUID_38142214_ed63_4965_9214_1bbc06e130e9,
                  1u,
                  0LL,
                  &GUID_8e1bbbb9_b3d5_430d_b276_d0e7454caab2,
                  &ppv);
  if ( ClassObject >= 0 )
  {
    ClassObject = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    (unsigned int)*v3,
                    0LL,
                    &GUID_428d4ddd_3462_43df_9395_1eff13ae7a4b,
                    &v9);
    if ( ClassObject >= 0 )
    {
      ClassObject = Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
                      &v10,
                      &v8,
                      v3);
      if ( ClassObject >= 0 )
      {
        ClassObject = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 152LL))(
                        v9,
                        v10,
                        (char *)a2 + 128);
        if ( ClassObject >= 0 )
        {
          *((_QWORD *)a2 + 14) = v9;
          *((_QWORD *)a2 + 15) = v10;
LABEL_14:
          ClassObject = 0;
        }
      }
    }
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( ClassObject < 0 )
    return ClassObject | 0xC0000000;
  return v2;
}
