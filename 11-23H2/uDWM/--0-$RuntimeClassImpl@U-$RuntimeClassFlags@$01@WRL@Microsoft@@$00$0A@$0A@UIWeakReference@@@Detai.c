/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180110690
 * Callers:
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1801106B8 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006B946 (--0IUnknown@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>(
        __int64 a1)
{
  __int64 result; // rax

  IUnknown::IUnknown((IUnknown *)a1);
  result = a1;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
