/*
 * XREFs of GreCreateSemaphoreInternal @ 0x14007B2F8
 * Callers:
 *     EngCreateSemaphore @ 0x14007A990 (EngCreateSemaphore.c)
 *     GreCreateSemaphore @ 0x14007B070 (GreCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1401C45F0 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     MultiUserGreTrackAddEngResource @ 0x14007B090 (MultiUserGreTrackAddEngResource.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

char *__fastcall GreCreateSemaphoreInternal(char a1)
{
  char *v2; // rax
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct _GRETHREAD *CurrentThread; // rax

  v2 = (char *)Win32AllocPoolImpl(0x40uLL, 0x88uLL, 0x6D657347u);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = (__int64)v2;
    ExInitializeResourceLite((PERESOURCE)(v2 + 32));
    MultiUserGreTrackAddEngResource(v4, (a1 & 1) != 0 ? 4 : 1);
    if ( v3 )
    {
      *((_QWORD *)v3 - 1) = 0LL;
    }
    else
    {
      CurrentThread = GreGetCurrentThread(v5);
      if ( CurrentThread )
      {
        *((_DWORD *)CurrentThread + 87) = 0;
        *((_DWORD *)CurrentThread + 88) = 0;
      }
    }
  }
  return v3;
}
