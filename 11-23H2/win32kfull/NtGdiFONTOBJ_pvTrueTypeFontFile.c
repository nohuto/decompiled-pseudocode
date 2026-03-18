/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02CC360
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0297E4C (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C029827C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1C02C7880 (-pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, _DWORD *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rsi
  _DWORD *v7; // rdi
  void *v9; // rbx
  struct _FONTOBJ *v10; // rax
  void *v11; // rax
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v7 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v7;
  v13 = 0LL;
  v9 = 0LL;
  v12 = 0;
  v10 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    v12 = *((_DWORD *)v6 + 93);
    v9 = (void *)*((_QWORD *)v6 + 45);
    if ( !v9 )
    {
      v11 = FONTOBJ_pvTrueTypeFontFileUMPD(v10, &v12, &v13);
      v9 = v11;
      if ( v11 )
        UMPDOBJ::pvFontFile(v6, v11, v13, v12);
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v9 != 0LL ? v12 : 0;
  }
  --*v7;
  return v9;
}
