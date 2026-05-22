/*
 * XREFs of ??0GestureSession@@AEAA@XZ @ 0x1801AB790
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801A3C1C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18010B0E8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@GestureSession@@UEAAJXZ @ 0x1801AC3B0 (-Reset@GestureSession@@UEAAJXZ.c)
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x1801ACFC0 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x1801ADFE0 (-ResetConfigValues@DragRecognizer@@UEAAXXZ.c)
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x1801AE358 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801AE844 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
GestureSession *__fastcall GestureSession::GestureSession(GestureSession *this)
{
  char *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r8
  void *(*v5)(void *); // r9

  *(_QWORD *)this = &GestureSession::`vftable';
  v2 = (char *)this + 32;
  ClickRecognizer::ClickRecognizer((GestureSession *)((char *)this + 32));
  *((_DWORD *)this + 44) = 112;
  *((_QWORD *)this + 21) = &DragRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  DragRecognizer::ResetConfigValues((GestureSession *)((char *)this + 168));
  *((_DWORD *)this + 64) = 256;
  *((_QWORD *)this + 31) = &FlickRecognizer::`vftable';
  `vector constructor iterator'((GestureSession *)((char *)this + 264), v3, v4, v5);
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 202) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 203) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 204) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 205) = FlickRecognizer::s_maximumFlickUp;
  *((_DWORD *)this + 106) = 128;
  *((_QWORD *)this + 52) = &PinchStretchRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 237) = PinchStretchRecognizer::s_minimumUpdateThreshold;
  TwoFingerGestureRecognizer::TwoFingerGestureRecognizer((GestureSession *)((char *)this + 480));
  *((_WORD *)this + 577) = -1;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 88) = v2;
  *((_QWORD *)this + 89) = (char *)this + 168;
  *((_QWORD *)this + 90) = (char *)this + 248;
  *((_QWORD *)this + 91) = (char *)this + 416;
  *((_QWORD *)this + 92) = (char *)this + 480;
  GestureSession::Reset(this);
  return this;
}
