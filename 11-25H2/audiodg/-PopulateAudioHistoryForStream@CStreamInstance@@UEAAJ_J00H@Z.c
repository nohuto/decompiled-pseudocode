/*
 * XREFs of ?PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z @ 0x14006E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041884 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 */

__int64 __fastcall CStreamInstance::PopulateAudioHistoryForStream(
        CStreamInstance *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v14 = v5;
  v10 = PopulateAudioHistoryForStreamInternal((CStreamInstance *)((char *)this - 8), a2, a3, a4, a5);
  v11 = v10;
  if ( v10 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v10);
  CSAutoLock<1>::~CSAutoLock<1>(&v14);
  return v11;
}
