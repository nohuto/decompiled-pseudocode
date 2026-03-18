/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402A3D74
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402A5B00 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x140061A58 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400921C8 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM2 *a2)
{
  struct _KMUTANT *v2; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  union _LARGE_INTEGER v10; // [rsp+80h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 264);
  KeWaitForSingleObject((char *)this + 264, Executive, 0, 0, 0LL);
  v5 = *((_DWORD *)this + 80);
  v10.QuadPart = 0LL;
  *((_DWORD *)a2 + 1) = v5;
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 81);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 82);
  BLTQUEUE::UpdateVsyncCount(this, &v10);
  *((_QWORD *)a2 + 2) = (__int64)(v10.QuadPart
                                * *((unsigned int *)a2 + 2)
                                * (unsigned __int64)*((unsigned int *)this + 97))
                      / *((unsigned int *)this + 96);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 118);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 118);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 60);
  v7 = *((_QWORD *)this + 60);
  *((_DWORD *)a2 + 10) = 0;
  v8 = bTracingEnabled == 0;
  *((_QWORD *)a2 + 6) = v7;
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 62);
  *((_DWORD *)a2 + 16) = 1;
  if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v6,
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
