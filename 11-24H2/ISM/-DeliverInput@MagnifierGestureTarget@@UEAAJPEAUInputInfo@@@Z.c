/*
 * XREFs of ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801AE860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057D70 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180158300 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180158C80 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801AD52C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801AE724 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801AEBE8 (-SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEB.c)
 *     ?SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801AECEC (-SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAE.c)
 */

__int64 __fastcall MagnifierGestureTarget::DeliverInput(MagnifierGestureTarget *this, struct InputInfo *a2)
{
  int v4; // edi
  char *v5; // rsi
  int v6; // ebp
  __int64 v7; // rcx
  char *v8; // rcx
  int v9; // eax
  _BOOL8 v10; // r9
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  const char *v16; // [rsp+28h] [rbp-30h]
  const char *v17; // [rsp+28h] [rbp-30h]
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x5F,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
    (const char *)(*((_DWORD *)this + 10) == 2),
    (__int64)"Shouldn't deliver input after completed",
    v16);
  v4 = 0;
  v5 = (char *)a2 + 320;
  v6 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v18, *((unsigned int *)a2 + 79));
  if ( v18[0] == -1LL || a2 == (struct InputInfo *)-320LL && v18[0] )
  {
    _o_terminate(v7);
    __debugbreak();
    JUMPOUT(0x1801AE9EBLL);
  }
  v8 = &v5[144 * v18[0]];
  while ( v5 != v8 )
  {
    v9 = v6 + 1;
    if ( (v5[12] & 4) == 0 )
      v9 = v6;
    v5 += 144;
    v6 = v9;
  }
  if ( v6 )
  {
    LOBYTE(v4) = *((_BYTE *)this + 36) != 0;
    *((_DWORD *)this + 10) = v4;
  }
  else
  {
    v10 = *((_BYTE *)this + 36) == 0;
    *((_DWORD *)this + 10) = 2;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
      (const char *)v10,
      (__int64)"First delivered input shouldn't be completed",
      v17);
  }
  v20 = *((_QWORD *)this + 3);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v20);
  v11 = AveragePoint((__int64)a2, &v20);
  v12 = *((_DWORD *)this + 8) == 1;
  v13 = *((unsigned int *)a2 + 79);
  v14 = *((unsigned int *)this + 10);
  v20 = v11;
  if ( v12 )
  {
    InputTraceLogging::Magnifier::SendZoom(v14, v13, &v20);
    MagnifierControllerProxy::ZoomGestureDetected(
      *((_QWORD *)this + 2) + 8LL,
      *((_DWORD *)this + 10),
      *((unsigned int *)a2 + 79),
      (const struct Windows::Foundation::Point *)&v20);
  }
  else
  {
    InputTraceLogging::Magnifier::SendPan(v14, v13, &v20);
    MagnifierControllerProxy::PanGestureDetected(
      *((_QWORD *)this + 2) + 8LL,
      *((_DWORD *)this + 10),
      *((unsigned int *)a2 + 79),
      (const struct Windows::Foundation::Point *)&v20);
  }
  result = 0LL;
  *((_BYTE *)this + 36) = 1;
  return result;
}
