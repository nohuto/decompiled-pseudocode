/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14005E0EC
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402ABF50 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035C20 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x140062314 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline @ 0x1400943B4 (Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x140094678 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM2 *a2)
{
  struct _KMUTANT *v2; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  _BYTE v14[48]; // [rsp+70h] [rbp-48h] BYREF
  union _LARGE_INTEGER v15; // [rsp+C0h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 264);
  KeWaitForSingleObject((char *)this + 264, Executive, 0, 0, 0LL);
  v5 = *((_DWORD *)this + 80);
  v15.QuadPart = 0LL;
  *((_DWORD *)a2 + 1) = v5;
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 81);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 82);
  BLTQUEUE::UpdateVsyncCount(this, &v15);
  v6 = *((unsigned int *)this + 96);
  v7 = (__int64)(v15.QuadPart * *((unsigned int *)a2 + 2) * (unsigned __int64)*((unsigned int *)this + 97)) % v6;
  *((_QWORD *)a2 + 2) = (__int64)(v15.QuadPart
                                * *((unsigned int *)a2 + 2)
                                * (unsigned __int64)*((unsigned int *)this + 97))
                      / v6;
  if ( (unsigned int)Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline(v6, v7) )
  {
    DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v14, (KSPIN_LOCK *)this + 57, 1);
    v9 = *((_DWORD *)this + 118);
    v10 = *((_QWORD *)this + 60);
    v11 = *((_QWORD *)this + 62);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v14);
    *((_DWORD *)a2 + 10) = 0;
    *((_DWORD *)a2 + 6) = v9;
    *((_DWORD *)a2 + 11) = v9;
    *((_QWORD *)a2 + 4) = v10;
    *((_QWORD *)a2 + 6) = v10;
  }
  else
  {
    *((_DWORD *)a2 + 6) = *((_DWORD *)this + 118);
    *((_DWORD *)a2 + 11) = *((_DWORD *)this + 118);
    *((_QWORD *)a2 + 4) = *((_QWORD *)this + 60);
    v12 = *((_QWORD *)this + 60);
    *((_DWORD *)a2 + 10) = 0;
    *((_QWORD *)a2 + 6) = v12;
    v11 = *((_QWORD *)this + 62);
  }
  *((_QWORD *)a2 + 7) = v11;
  *((_DWORD *)a2 + 16) = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v8,
      2,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 81),
      *((_DWORD *)this + 82),
      *((_QWORD *)this + 42),
      3,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex(v2, 0);
  return 0LL;
}
