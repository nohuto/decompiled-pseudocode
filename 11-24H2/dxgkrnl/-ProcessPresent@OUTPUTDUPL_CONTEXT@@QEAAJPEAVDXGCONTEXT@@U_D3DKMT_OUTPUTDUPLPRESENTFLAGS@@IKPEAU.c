/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402B40FC
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E55D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B4404 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGCONTEXT *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        struct AUTOEXPANDALLOCATION *a8,
        struct DXGCONTEXT **a9)
{
  int v9; // r15d
  int v10; // ebx
  DXGDXGIKEYEDMUTEX *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // [rsp+30h] [rbp-59h]
  _QWORD v20[3]; // [rsp+58h] [rbp-31h] BYREF
  int v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+74h] [rbp-15h]
  unsigned int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  struct _D3DKMT_PRESENT_RGNS *v25; // [rsp+80h] [rbp-9h]
  struct AUTOEXPANDALLOCATION *v26; // [rsp+88h] [rbp-1h]
  const struct DXGK_PRESENT_PARAMS *v27; // [rsp+90h] [rbp+7h]
  struct DXGCONTEXT **v28; // [rsp+98h] [rbp+Fh]

  v9 = a4;
  v10 = a3;
  if ( *((_DWORD *)this + 80) )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 0LL;
    WdLogGlobalForLineNumber = 1959;
  }
  else
  {
    v13 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
    v14 = *((_QWORD *)v13 + 1);
    if ( v14 )
    {
      v15 = *((_QWORD *)a2 + 2);
      if ( v14 == v15 )
      {
LABEL_4:
        v23 = a5;
        v25 = a6;
        v26 = a8;
        v27 = a7;
        v28 = a9;
        v20[0] = 0LL;
        v20[2] = 0LL;
        v24 = 0;
        v20[1] = a2;
        v21 = v10;
        v22 = v9;
        return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v20);
      }
      WdLogSingleEntry2(1LL, *((_QWORD *)v13 + 1), v15);
      v19 = *((_QWORD *)a2 + 2);
      WdLogGlobalForLineNumber = 1981;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"KeyedMutex is already been opened by device 0x%I64x so cannot open for device 0x%I64x",
        v14,
        v19,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    else
    {
      v17 = DXGDXGIKEYEDMUTEX::OpenForDevice(v13, *((ADAPTER_RENDER ***)a2 + 2));
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_4;
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 1972;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"OpenForDevice() Failed 0x%I64x",
        v18,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v18;
    }
  }
  return result;
}
