/*
 * XREFs of ?InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z @ 0x140042F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioPump::InitLoggingInfo(
        CAudioPump *this,
        const struct _tlgProvider_t *a2,
        struct _GUID *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v9; // rdx
  size_t v10; // rcx
  bool v11; // zf
  int v12; // ebx
  __int64 v14; // rdx
  void **v15; // [rsp+20h] [rbp-38h]
  wchar_t *v16; // [rsp+28h] [rbp-30h] BYREF
  char v17; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v11 = *((_BYTE *)this + 64) == 0;
  v19 = v4;
  if ( v11 )
  {
    v12 = -2005139437;
    v14 = 307LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v12);
    CSAutoLock<1>::~CSAutoLock<1>(&v19);
    return (unsigned int)v12;
  }
  *((_QWORD *)this + 595) = a2;
  *(struct _GUID *)((char *)this + 4696) = *a3;
  if ( a4 )
  {
    v16 = 0LL;
    v15 = (void **)((char *)this + 4712);
    v17 = 1;
    v12 = _AllocString<CTCoAllocPolicy>(v10, v9, a4, (const wchar_t **)&v16);
    if ( v17 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v15,
        v16);
    if ( v12 < 0 )
    {
      v14 = 313LL;
      goto LABEL_11;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
