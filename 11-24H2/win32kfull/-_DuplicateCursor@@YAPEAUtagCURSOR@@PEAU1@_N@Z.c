/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850
 * Callers:
 *     _GetWindowIcon @ 0x14012C2BC (_GetWindowIcon.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x140093214 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v3; // rdx
  __int64 EmptyCursorObject; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  size_t Size; // [rsp+28h] [rbp-E0h]
  unsigned int v11; // [rsp+38h] [rbp-D0h] BYREF
  size_t v12[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B8h]
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v16; // [rsp+88h] [rbp-80h]
  __int16 v17; // [rsp+94h] [rbp-74h]
  __int16 v18; // [rsp+96h] [rbp-72h]
  __int128 v19; // [rsp+98h] [rbp-70h]
  unsigned int v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+CCh] [rbp-3Ch]
  int v22; // [rsp+D0h] [rbp-38h]

  v1 = 0LL;
  v11 = 0;
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)v12, 0LL, 0LL, &v11, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0LL, v3);
    LOBYTE(v5) = 3;
    v1 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(EmptyCursorObject, v5);
    if ( v1 )
    {
      v14 = 0LL;
      memset_0(v15, 0, 0x88uLL);
      if ( LODWORD(v12[0]) )
        v16 = 3;
      else
        v16 = 1;
      v20 = v11;
      v21 = *((_DWORD *)a1 + 35);
      v22 = *((_DWORD *)a1 + 36);
      v17 = WORD2(v12[0]);
      v18 = v12[1];
      v19 = v13;
      DpiForSystem = GetDpiForSystem(v6);
      DpiDependentMetric = GetDpiDependentMetric(7, DpiForSystem);
      LODWORD(Size) = 0;
      if ( !_SetCursorIconDataEx(v1, &v14, &v14, (struct tagCURSORDATA *)v15, Size, DpiDependentMetric) )
      {
        _DestroyCursor(v1, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v13);
      GreDeleteObject(*((_QWORD *)&v13 + 1));
    }
  }
  return v1;
}
