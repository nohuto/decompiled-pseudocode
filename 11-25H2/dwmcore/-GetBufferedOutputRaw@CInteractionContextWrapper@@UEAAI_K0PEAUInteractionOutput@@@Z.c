/*
 * XREFs of ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x1802C02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801792B4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x18017A21C (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x180203C14 (_anonymous_namespace_--ResetInteractionOutput.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1802069C4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputRaw(
        CInteractionContextWrapper *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct InteractionOutput *a4)
{
  struct InteractionOutput *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  int v9; // r9d
  __int64 *v10; // r15
  unsigned __int64 v11; // r14
  __int64 *v12; // rsi
  bool v13; // zf
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h]
  unsigned __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  struct InteractionOutput *v18; // [rsp+88h] [rbp+20h]

  v18 = a4;
  v16 = a2;
  v4 = a4;
  v5 = a3;
  v7 = 0;
  if ( !a3 )
  {
    v17 = 0LL;
    v15 = 0LL;
    if ( QueryPerformanceCounter((LARGE_INTEGER *)&v15)
      && (unsigned int)QpcTimeConverter::QpcToMicroSec((CInteractionContextWrapper *)((char *)this + 616), v15, &v17) )
    {
      v5 = v17;
    }
    else
    {
      v5 = 1000LL * GetTickCount();
    }
  }
  anonymous_namespace_::ResetInteractionOutput((__int64)v4, 0);
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this)
    && *((_DWORD *)this + 138) )
  {
    v15 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)this + 14);
    v10 = CQueue<CBufferedInteractionOutput *>::PeekFirst((__int64 *)this + 67, v8, &v15);
    if ( v10 )
    {
      v11 = v15;
      do
      {
        if ( *(_QWORD *)v11 >= v16 && *(_QWORD *)v11 < v5 )
        {
          CInteractionContextWrapper::_UpdateInteractionOutput(
            this,
            (const struct INTERACTION_CONTEXT_OUTPUT *)(v11 + 12),
            v4,
            v9);
          ++v7;
        }
        v11 = 0LL;
        v12 = 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)this + 14);
        if ( v10 && (CInteractionContextWrapper *)*v10 != (CInteractionContextWrapper *)((char *)this + 536) )
        {
          v12 = (__int64 *)*v10;
          v11 = *(_QWORD *)(*v10 + 16);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 14);
        v13 = v12 == 0LL;
        v10 = v12;
        v4 = v18;
      }
      while ( !v13 );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 14);
  }
  return v7;
}
