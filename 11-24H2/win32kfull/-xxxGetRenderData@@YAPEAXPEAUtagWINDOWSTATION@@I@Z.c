/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x14010429C
 * Callers:
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3434@Z @ 0x1401FB4CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  __int64 v6; // r9
  struct _KPROCESS *ThreadProcess; // rax
  struct _KPROCESS *CurrentProcess; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ebx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // ecx
  struct tagCLIP *ClipFormat; // rax
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  LONGLONG TimeQuadPart; // [rsp+58h] [rbp-28h] BYREF
  LONGLONG v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-10h] BYREF
  int v24; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int ThreadProcessId; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int CurrentProcessId; // [rsp+B8h] [rbp+38h] BYREF

  v22 = 0LL;
  v4 = *((_QWORD *)a1 + 14);
  v5 = a2;
  if ( v4 )
  {
    if ( (unsigned int)dword_140398BB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, a3, v4) )
    {
      v19 = 0x1000000LL;
      v24 = v5;
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v6 + 16));
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(ThreadProcess);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(**(PETHREAD **)(*((_QWORD *)a1 + 14) + 16LL));
      CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
      v21 = PsGetProcessCreateTimeQuadPart(CurrentProcess);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v9,
        (unsigned int)&unk_1403673EA,
        v10,
        v11,
        (__int64)&CurrentProcessId,
        (__int64)&v21,
        (__int64)&ThreadProcessId,
        (__int64)&TimeQuadPart,
        (__int64)&v24,
        (__int64)&v19);
    }
    v12 = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 16) = v12 | 0x80;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)a1 + 14));
    v13 = xxxSendTransformableMessageTimeout(
            *((struct tagTHREADINFO ***)a1 + 14),
            773LL,
            v5,
            0LL,
            0x42u,
            0x7530u,
            (unsigned __int64 *)&v22,
            1,
            0);
    v15 = *((_DWORD *)a1 + 16);
    if ( (v12 & 0x40) != 0 )
      v16 = v15 | 0x40;
    else
      v16 = v15 & 0xFFFFFFBF;
    *((_DWORD *)a1 + 16) = v16 & 0xFFFFFF7F;
    if ( !v13 )
    {
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v14);
      return 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v14);
  }
  ClipFormat = FindClipFormat(a1, v5, 1u);
  if ( !ClipFormat )
    return 0LL;
  return (void *)*((_QWORD *)ClipFormat + 1);
}
