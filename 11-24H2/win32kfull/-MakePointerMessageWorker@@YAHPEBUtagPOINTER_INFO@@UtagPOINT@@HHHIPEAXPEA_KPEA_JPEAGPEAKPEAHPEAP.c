/*
 * XREFs of ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A9368
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A903C (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1400A9130 (PrepareSentPointerMessageForClient.c)
 * Callees:
 *     GetDPITransformationMonitor @ 0x14006E2CC (GetDPITransformationMonitor.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall MakePointerMessageWorker(
        const struct tagPOINTER_INFO *a1,
        struct tagPOINT a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8,
        __int64 *a9,
        unsigned __int16 *a10,
        unsigned int *a11,
        int *a12,
        HWND *a13)
{
  int v13; // ebx
  unsigned int v17; // esi
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  HWND v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 DPITransformationMonitor; // [rsp+20h] [rbp-10h] BYREF
  __int64 v26; // [rsp+60h] [rbp+30h] BYREF

  v13 = 0;
  v26 = 0LL;
  v17 = 1;
  if ( a1 )
  {
    v18 = *((unsigned __int16 *)a1 + 2);
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetAdjustedPointerPixelLocation)(
                          *((_QWORD *)a1 + 4),
                          a2,
                          &v26) )
      v26 = *((_QWORD *)a1 + 4);
    LOBYTE(v19) = 1;
    v20 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 3), v19);
    if ( v20 && (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 288LL) & 0xF) != 2 )
    {
      DPITransformationMonitor = GetDPITransformationMonitor(v26, v20);
      PhysicalToLogicalDPIPoint(&v26, &v26, 0LL, &DPITransformationMonitor);
    }
    if ( a6 <= 0x249 )
    {
      if ( a6 != 585 )
      {
        if ( a6 == 528 )
        {
          v24 = (v18 << 16) | 0x246;
          goto LABEL_34;
        }
        if ( a6 == 577 || a6 == 578 || a6 == 579 )
        {
          v23 = a3;
          goto LABEL_33;
        }
        if ( a6 != 581 && a6 - 582 > 1 )
          return 0;
      }
    }
    else if ( a6 != 586 )
    {
      switch ( a6 )
      {
        case 0x24Bu:
          *a8 = v18 | ((unsigned __int64)a3 << 16);
          break;
        case 0x24Cu:
          *a8 = v18;
          break;
        case 0x250u:
          *a8 = v18;
LABEL_21:
          *a9 = (unsigned __int16)v26 | (unsigned __int64)(WORD2(v26) << 16);
          goto LABEL_15;
        case 0x251u:
        case 0x252u:
          goto LABEL_32;
        case 0x253u:
          goto LABEL_15;
        default:
          return 0;
      }
      *a9 = (__int64)a7;
LABEL_15:
      *a10 = *((_WORD *)a1 + 2);
      *a11 = *(_DWORD *)a1;
      if ( a4 || a5 )
        v13 = 1;
      v21 = (HWND)*((_QWORD *)a1 + 3);
      *a12 = v13;
      *a13 = v21;
      return v17;
    }
LABEL_32:
    v23 = *((_WORD *)a1 + 6) & 0xE1F7;
LABEL_33:
    v24 = v18 | (v23 << 16);
LABEL_34:
    *a8 = v24;
    goto LABEL_21;
  }
  return 0LL;
}
