/*
 * XREFs of ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800629AC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D99C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectHeaderInitialize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_DWORD *)(a1 + 40) = a3;
  result = HIBYTE(a2);
  *(_QWORD *)(a1 + 8) = HIBYTE(a2)
                      + 37
                      * (BYTE6(a2)
                       + 37
                       * (BYTE5(a2)
                        + 37
                        * (BYTE4(a2)
                         + 37
                         * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL)))))));
  return result;
}
