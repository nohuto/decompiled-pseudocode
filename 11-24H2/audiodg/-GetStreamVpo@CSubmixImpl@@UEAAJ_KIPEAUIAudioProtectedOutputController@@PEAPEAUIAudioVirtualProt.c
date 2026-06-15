/*
 * XREFs of ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006E9B0
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140065590 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x140005558 (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubmixImpl::GetStreamVpo(
        CSubmixImpl *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  struct IStreamInstanceInternal *Stream; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v17 = v5;
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( Stream )
  {
    v14 = (*(__int64 (__fastcall **)(struct IStreamInstanceInternal *, _QWORD, struct IAudioProtectedOutputController *, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)Stream + 80LL))(
            Stream,
            a3,
            a4,
            a5);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    v13 = (unsigned int)v14;
    v12 = 671LL;
  }
  else
  {
    v11 = -2005139430;
    v12 = 670LL;
    v13 = 2289827866LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v13);
LABEL_7:
  CSAutoLock<1>::~CSAutoLock<1>(&v17);
  return v11;
}
