/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14006F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006F0A4 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiIsRfxVgpuDevice @ 0x140230D2C (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct _VIDSCH_GLOBAL *v7; // rdx
  int v8; // eax
  _BYTE v10[24]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10, a1, 1);
  if ( *((_DWORD *)a1 + 50) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 27)) )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, a1, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = *((_QWORD *)a1 + 391);
      v7 = *(struct _VIDSCH_GLOBAL **)(v6 + 744);
      memset(v11, 0, sizeof(v11));
      LODWORD(v11[0]) = 6;
      v8 = VIDSCH_EXPORT::VidSchEscape(*(VIDSCH_EXPORT **)(v6 + 736), v7, (struct _D3DKMT_VIDSCH_ESCAPE *)v11);
      v4 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v8);
        WdLogGlobalForLineNumber = 750;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, a1, v5);
      WdLogGlobalForLineNumber = 734;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
    if ( a2 )
      *a2 = v4;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  }
  return v4;
}
