/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003D71C
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EBEC (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x18007F324 (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 *     ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x18007F44C (-HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x18006652C (RtlStringCopyWorkerW.c)
 *     RtlStringValidateDestW @ 0x18007F5B8 (RtlStringValidateDestW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  _WORD *v6; // r11

  result = RtlStringValidateDestW(a1, a2);
  if ( (int)result >= 0 )
    return RtlStringCopyWorkerW(v6, v5, v4, v4);
  if ( v5 )
    *v6 = 0;
  return result;
}
