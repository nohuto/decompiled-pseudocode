/*
 * XREFs of ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x1400502EC
 * Callers:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1400502B8 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlipManagerTokenIFlipInfo::~FlipManagerTokenIFlipInfo(FlipManagerTokenIFlipInfo *this)
{
  __int64 v1; // rbx
  struct _KEVENT *v3; // rbx

  v1 = *((_QWORD *)this + 13);
  if ( v1 )
  {
    v3 = *(struct _KEVENT **)(v1 + 16);
    if ( v3 )
    {
      KeSetEvent(v3, 1, 0);
      ObfDereferenceObject(v3);
    }
    ExFreePoolWithTag(*((PVOID *)this + 13), 0);
  }
}
