/*
 * XREFs of ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x140037350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetServiceProvider@CAPOProcessingHostObject@@QEAAJPEAPEAUIServiceProvider@@@Z @ 0x140037498 (-GetServiceProvider@CAPOProcessingHostObject@@QEAAJPEAPEAUIServiceProvider@@@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::GetServiceProviderForAPO(
        CAPOProcessingHost *this,
        struct IAudioProcessingObject *a2,
        struct IServiceProvider **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // r9
  unsigned __int64 i; // r10
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  int ServiceProvider; // eax
  unsigned int v15; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v19; // [rsp+48h] [rbp+10h]

  v19 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v7 = 0xCBF29CE484222325uLL;
  v18 = v3;
  for ( i = 0LL; i < 8; ++i )
  {
    v9 = *((unsigned __int8 *)&v19 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = *((_QWORD *)this + 26);
  v11 = *((_QWORD *)this + 24);
  v12 = *(_QWORD *)(v10 + 16 * (v7 & *((_QWORD *)this + 29)) + 8);
  if ( v12 == v11 )
  {
LABEL_7:
    v12 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 16 * (v7 & *((_QWORD *)this + 29)));
    while ( a2 != *(struct IAudioProcessingObject **)(v12 + 16) )
    {
      if ( v12 == v13 )
        goto LABEL_7;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    v12 = *((_QWORD *)this + 24);
  if ( v12 == v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80070490LL);
    CSAutoLock<1>::~CSAutoLock<1>(&v18);
    return 2147943568LL;
  }
  else
  {
    ServiceProvider = CAPOProcessingHostObject::GetServiceProvider(*(CAPOProcessingHostObject **)(v12 + 24), a3);
    v15 = ServiceProvider;
    if ( ServiceProvider < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)ServiceProvider);
      if ( v3 )
        LeaveCriticalSection(v3);
      return v15;
    }
    else
    {
      if ( v3 )
        LeaveCriticalSection(v3);
      return 0LL;
    }
  }
}
